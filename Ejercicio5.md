# Practica 4 - Programacion Paralela
## Ejercicio 5
###  Esquemas algorítmicos paralelos:
El **Pipeline** ("Tubería traducido al español"), es una técnica para implementar simultaneidad a nivel de instrucciones dentro de un solo procesador. Se intenta mantener ocupada a cada parte del procesador, dividiendo las instrucciones entrantes en una serie de pasos secuenciales, que se realizan por diferentes unidades del procesador que trabajan de manera simultánea. Lo que provoca que aumente el rendimiento de la CPU a una velocidad de reloj determinada, aunque puede que aumente la latencia debido a tales sobrecargas. 

En la **programación**, esta arquitectura pipeline consiste en ir transformando un flujo de datos en un proceso comprendido por varias fases secuenciales, siendo la entrada de cada una la salida de la anterior. Es muy común en el desarrollo de programas para el intérprete de comandos.

![Pipeline](https://upload.wikimedia.org/wikipedia/commons/thumb/6/67/Pipeline%2C_4_stage_with_bubble.svg/1200px-Pipeline%2C_4_stage_with_bubble.svg.png)  
***
El esquema **Maestro-Esclavo** se refiere a un modelo informático jerárquico que presenta un componente central (maestro) que asigna recursos y asigna tareas a otros componentes interconectados (esclavos). Este sistema o modelo promueve la distribución de la carga de trabajo y optimiza la utilización de los recursos.

Se aplica normalmente en bases de datos, renderizado de gráficos, simulaciones científicas. Su capacidad para facilitar la gestión de tareas complejas y garantizar una ejecución sincronizada también lo convierte en una opción buena para la computación distribuida.

![Maestro-Esclavo](https://www.researchgate.net/publication/303315467/figure/fig1/AS:363164937015298@1463596676419/Figura-2-Esquema-de-replicacion-maestro-esclavo-de-MySql-3-Caso-de-Estudio.png)  
***
En la **Granja de procesos** o **Cluster de computadoras/procesos**, se aplica a los sistemas distribuidos de granjas de computadoras unidos entre sí normalmente por una red de alta velocidad y que se comportan como si fuesen un único servidor. A cada uno de los elementos del cluster se le conoce como nodo, que pueden tener uno o varios sistemas operativos. Otro componente importante de una granja o cluster es la interfaz de la red, la cual es responsable de transmitir y recibir los paquetes de datos, que viajan a través de la red entre los nodos.

Similar al esquema Maestro-Esclavo, pero aquí se implica una estructura más distribuida donde los procesos que trabajan pueden comunicarse entre sí y no depender de un maestro. Las tareas se colocan en una cola de trabajo y se van realizando y devolviendo los resultados.

![Cluster de computadoras](https://infosegur.wordpress.com/wp-content/uploads/2013/11/cluster.jpg)  
***
La **bolsa de tareas**/grupo de tareas o "task pool" es un esquema en el cual las tareas son puestas en una "bolsa" en común y los procesadores toman estas tareas de la bolsa cuando estén disponibles. Es una arquitectura dinámica y se adapta a la carga de trabajo en tiempo real. Puede ser que tenga una cola de trabajos o tareas; las tareas, cuando no pueden ser accedidas por el procesador porque ya están ocupados, se colocan en una cola de espera hasta que esté disponible el uso del procesador.

![Task Pool](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0c/Thread_pool.svg/800px-Thread_pool.svg.png)

***
## Bibliografia
[Wikipedia Pipeline](https://es.wikipedia.org/wiki/Arquitectura_en_pipeline_(inform%C3%A1tica))  
[Definicion.de Pipeline](https://definicion.de/pipeline/)  
[Maestro-Esclavo](https://www.phoenixnap.mx/glosario/arquitectura-amo-esclavo#:~:text=La%20arquitectura%20maestro%2Desclavo%20se,otros%20componentes%20interconectados%20(esclavos).)  
[Wikipedia Cluster](https://es.wikipedia.org/wiki/Cl%C3%BAster_de_computadoras)  
[Cluster Info](https://www.revista.unam.mx/vol.4/num2/art3/cluster.htm)  
[Task Pool](https://www.freertos.org/taskpool/implementation.html)
[Task Pool Info](https://softwareengineering.stackexchange.com/questions/17590/what-is-a-task-pool)
