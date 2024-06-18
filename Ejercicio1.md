# Practica 4 - Programacion Paralela
## Ejercicio1
***

OpenMP, Open Multi Processing, es un estándar para la programación paralela basada en directivas. Es decir, puede utilizar anotaciones especiales o programas en el código para indicar qué partes pueden ser ejecutadas en paralelo por varios subprocesos en un sistema de memoria compartida. Compatible con la mayoría de compiladores y lenguajes de programación, como C, C++ y Fortran. OpenMP es fácil de usar, solo se necesita modificar su código existente con unas pocas directivas, sin cambiar la estructura o la lógica de su programa. También permite controlar la cantidad de subprocesos, el intercambio de datos y mecanismos de sincronización.

MPI, Message Passing Interface, es un estándar para la programación paralela de memoria distribuida. Puede utilizar funciones especiales o llamadas en el código para comunicar datos y mensajes entre varios procesos en un sistema donde la memoria está distribuida. Al igual que OpenMP, MPI es compatible con la mayoría de compiladores y lenguajes como C, C++ y Fortran. Es más flexible y escalable que OpenMP, ya que puede ejecutar su programa en cualquier número de procesos, en cualquier arquitectura y en cualquier topología de red. También permite diseñar sus propios tipos de datos, patrones de comunicaciones y operaciones colectivas.

| **Característica**               | **OpenMP**                                                        | **MPI**                                                         |
|----------------------------------|-------------------------------------------------------------------|-----------------------------------------------------------------|
| **Memoria**                      | Memoria compartida                                                | Memoria distribuida                                             |
| **Modelo de Sistema**            | Sistemas con múltiples núcleos y memoria compartida               | Clústeres y supercomputadoras con memoria distribuida           |
| **Comunicación**                 | Implícita, mediante memoria compartida                            | Explícita, mediante envío y recepción de mensajes                |
| **Control sobre procesos**       | Menor control, gestión automática de hilos                        | Mayor control, gestión manual de procesos                        |
| **Escalabilidad**                | Limitada a un único sistema de memoria compartida                 | Alta, puede escalar a miles de nodos                             |
| **Portabilidad**                 | Alta: puede ejecutarse en cualquier sistema con memoria compartida| Alta: puede ejecutarse en cualquier sistema con memoria distribuida |
| **Rendimiento y eficiencia**     | Puede sufrir por contención y uso compartido falso                | Puede lograr alto rendimiento mediante protocolos de red optimizados |
| **Localidad de datos**           | Buena, explotando la coherencia de caché                          | Depende de la estrategia de distribución y comunicación           |
| **Flexibilidad**                 | Limitada, menos control sobre la distribución de datos y equilibrio de carga | Alta, permite diseñar esquemas personalizados de comunicación y partición |
| **Simplicidad**                  | Beneficio clave, paralelización con cambios mínimos en el código  | Inconveniente clave, mayor complejidad en la programación         |
| **Errores**                      | Menos propenso a errores                                          | Más propenso a errores                                           |

### Modelos para los que se aplican

**OpenMP** se aplica al modelo de memoria compartida, ideal para sistemas con múltiples núcleos o procesadores que comparten el mismo espacio de memoria. **MPI** se aplica al modelo de memoria privada o distribuida, adecuado para sistemas donde cada nodo tiene su propia memoria local y se comunican mediante el uso de mensajes.
***
## Bibliografia
[Wikipedia](https://es.wikipedia.org/wiki/OpenMP)  
[Post-Blog-Linkedin](https://www.linkedin.com/advice/0/what-pros-cons-using-openmp-vs-mpi-shared?lang=es&originalSubdomain=es)
