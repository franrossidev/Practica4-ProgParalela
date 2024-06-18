# ¿Qué es el análisis de prestaciones de servicios en programación paralela?

Podemos definir este concepto como el estudio y evaluación de cómo se comportan los algoritmos en términos de eficiencia,velocidad y uso de recursos. Y así, poder comprender el rendimiento de los mismos, sobretodo en contextos donde se manejan grandes cantidades de datos o se necesita un procesamiento rápido. 

A continuación, algunas de las medidas utilizadas. 

## Aceleración y eficiencia

Los conceptos de aceleración y eficiencia se han utilizado durante años para medir el rendimiento de sistemas de cómputo paralelos. Sin embargo, estas medidas enfrentan limitaciones en situaciones reales, como con datos muy grandes o pocos procesadores. La aceleración, formalmente la relación entre el tiempo de ejecución en un procesador secuencial y en múltiples procesadores, es limitada por la "ley de Amdahl", que establece que la parte secuencial de un programa limita la aceleración máxima posible.

## Escalabilidad

La escalabilidad evalúa cómo rinde un algoritmo paralelo al aumentar el número de procesadores (P) para un tamaño de problema fijo. Esto incluye analizar cómo varían el tiempo de ejecución (T) y la eficiencia (E) al incrementar P. La escalabilidad puede ser limitada por factores como costos de comunicación y tiempos de inactividad.

### Modelos de escalabilidad 

##### Modelo de Isoeficiencia:
- Define la escalabilidad en función de la carga de trabajo (W) y el número de procesadores (P), con eficiencia constante (E).
- Un sistema es más escalable si la carga de trabajo requerida para mantener la eficiencia constante crece menos que linealmente con respecto a P.
- Un algoritmo con función isoeficiente lineal es altamente escalable; en cambio, una función cuadrática o exponencial indica baja escalabilidad.

##### Modelo de Isoaceleración:

- Similar al modelo de isoeficiencia, pero mantiene constante la aceleración en lugar de la eficiencia mientras se escala el tamaño de la máquina y del problema simultáneamente.

##### Modelo de Isoutilización:

- Propone predecir la tasa de crecimiento de la carga de trabajo requerida, manteniendo constante la utilización del sistema.
- La utilización (U) se define como U = W / (PTpPpico), donde Ppico es el máximo rendimiento posible.
- Sistemas con menor isoutilización son más escalables y tendrán tiempos de ejecución más cortos.

## Complejidad Algorítmica Paralela 

La complejidad de un algoritmo secuencial se mide por el número de operaciones que realiza. Por ejemplo, multiplicar dos matrices cuadradas de tamaño n requiere aproximadamente n³ operaciones, lo que se expresa como O(n³). Este tipo de notación indica que el número de operaciones realizadas por el algoritmo se acerca a un límite superior, g, de forma asintótica. En los algoritmos secuenciales, la complejidad es una medida de la calidad del algoritmo.

Para los algoritmos paralelos, se introduce el número de procesadores como un nuevo parámetro, lo que requiere nuevas definiciones de complejidad. El modelo teórico PRAM (Parallel Random Access Machine) se utiliza comúnmente para estudiar la complejidad de los algoritmos paralelos. Este modelo considera un conjunto de procesadores secuenciales (RAM) que se comunican mediante una memoria global compartida.

En PRAM, cada procesador tiene una memoria local privada y puede acceder de forma sincrónica a la memoria global. Hay diferentes tipos de PRAM dependiendo de cómo se maneja el acceso concurrente a la memoria:

- EREW (Exclusive Read, Exclusive Write): Prohíbe el acceso concurrente tanto para lectura como para escritura.
- CREW (Concurrent Read, Exclusive Write): Permite el acceso concurrente para lectura pero no para escritura.
- CRCW (Concurrent Read, Concurrent Write): Permite el acceso concurrente tanto para lectura como para escritura.

La jerarquía entre los modelos PRAM se expresa como EREW << CREW << CRCW, indicando que los modelos más permisivos pueden simular a los más restrictivos. La simulación de modelos concurrentes en modelos exclusivos añade un factor de tiempo logarítmico en el número de procesadores.

Un algoritmo paralelo es eficaz si su tiempo de ejecución es polinómico y su trabajo es comparable al mejor algoritmo secuencial. Un algoritmo paralelo es bueno si cumple con la eficacia y su trabajo es del mismo orden que el mejor algoritmo secuencial.

## Puntos de Referencia o Programas de Comparación del Rendimiento (Benchmarks) 
 Un punto de referencia (benchmark) es un programa diseñado para medir una característica de rendimiento específica de un computador, como la velocidad de cálculo de punto flotante o la rapidez de las operaciones de entrada/salida.
 
 ###### Objetivos:
 
 - Medir y predecir el rendimiento de sistemas computacionales.
- Identificar las debilidades y fortalezas de un sistema.
- Comparar diferentes sistemas con respecto a una clase de aplicaciones.

##  Otros Aspectos de Rendimiento 

Tiempo de ejecución:

El tiempo de ejecución total (T) de un programa paralelo puede definirse como la suma de los tiempos de cálculo, comunicación y ocio en un procesador arbitrario (considerando un solo procesador) o como el máximo de estos tiempos sobre todos los procesadores. El tiempo de cálculo depende del tamaño del problema, el número de procesadores y las características del hardware y los algoritmos.

Tiempos de comunicación:

Los tiempos de comunicación (Tmensaje) representan el tiempo que las tareas dedican a enviar y recibir mensajes. Se consideran dos tipos: interprocesadores (entre tareas en diferentes procesadores) e intraprocesadores (tareas en el mismo procesador). Estos tiempos pueden ser comparables en algunos sistemas.

Tiempos de ocio:

Los tiempos de ocio se producen cuando un procesador está inactivo debido a largos cálculos en otros procesadores o a la falta de datos necesarios para sus cálculos. Se pueden evitar mediante técnicas de equilibrio de carga y solapar la comunicación con la computación.

Factores que afectan el rendimiento:

- Algoritmos, estructuras de datos y datos de entrada: el flujo de control de un programa puede cambiar según las entradas, afectando el tiempo de ejecución.
- Plataformas: hardware y sistema operativo influyen en el rendimiento. La jerarquía de memoria y el uso exclusivo o compartido del computador también son relevantes.
- Lenguajes: compiladores y opciones de compilación juegan un rol importante.
Capacidad de ejecución:

En un computador paralelo compartido, la capacidad de ejecución indica el número de trabajos realizados por unidad de tiempo. Se puede aumentar mediante el encauzamiento (solapar tiempos de ejecución) o la asignación de diferentes trabajos en distintos nodos del sistema.

Jerarquía de memoria:

El rendimiento de un computador moderno depende de la rapidez con que los datos se mueven entre procesadores y memorias. Se deben considerar tres parámetros para cada nivel de memoria: capacidad de almacenamiento, tiempo de acceso y tasa de transferencia.

Costos de paralelismo e interacción:

El tiempo de ejecución de programas paralelos puede expresarse como la suma de tiempos de cálculo, paralelismo e interacción. Los costos de paralelismo surgen del manejo del paralelismo, operaciones de agrupamiento y consultas a procesos. Los costos de interacción se relacionan con la sincronización, agregación y comunicación.

Análisis de rendimiento:

El análisis de rendimiento implica la colección, transformación y visualización de datos para identificar cuellos de botella y optimizar programas paralelos. Las técnicas de colección de datos incluyen perfiles, contadores y trazas de eventos. La transformación de datos se utiliza para reducir su volumen y obtener estadísticas. La visualización de datos facilita la exploración del espacio multidimensional de los datos de rendimiento.



## Bibliografía

Introducción a la Computación Paralela
J. Aguilar, E. Leiss



