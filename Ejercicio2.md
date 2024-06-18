# Técnicas de descomposición en Programación Paralela:

### Paralelismo de tarea
Un **modelo de tarea paralela** se centra en los *procesos* o *hilos de ejecución*. Estos procesos suelen tener conductas distintas, que hace hincapié en la necesidad de comunicación. El paralelismo de tareas es una forma natural de expresar la *comunicación de paso de mensajes*. Por lo general se clasifica como MIMD/MPMD o MISD.

### Paralelismo de datos
Un **modelo de datos en paralelo** se centra en *realizar operaciones en un conjunto de datos* que por lo general está estructurado en una matriz. Un conjunto de tareas realizará operaciones en estos datos, pero de forma independiente en particiones separadas. En un **sistema de memoria compartida**, los datos serán *accesibles para todos*, pero en un **sistema de memoria distribuida** estos serán *divididos entre las memorias y trabajados de forma local*. El paralelismo de datos por lo general se clasifica como MIMD/SPMD o SIMD.

### Sistemas Paralelos idealizados
Los **sistemas idealizados** son divididos en dos categorías. Los sistemas analizados en la *primera categoría*, se caracterizan por el aislamiento del espacio de diseño abstracto visto por el programador. En esta, todos los procesos son presentados con el mismo acceso a algún tipo de espacio de **memoria compartida**. En su forma más fácil, cualquier proceso puede intentar acceder a cualquier tema en cualquier momento. La *segunda categoría* considera máquinas en las que los dos niveles están más cerca entre sí y, en particular, aquellos en los que el mundo del programador incluye paralelismo explícito. Esta categoría **descarta la memoria compartida** y trabaja con base en cooperación con alguna forma de paso de mensaje explícito.

***
## Bibliografia
[Modelo de programación paralela - Wikipedia](https://es.wikipedia.org/wiki/Modelo_de_programación_paralela#:~:text=ser%20más%20prescrita.-,Descomposición%20de%20problema,o%20paradigmas%20de%20programación%20paralela)