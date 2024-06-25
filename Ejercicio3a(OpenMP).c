#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define MAX 50

int main(){
    int n;
    double suma = 0;
    double numeros[MAX];

    printf("Ingrese cantiadad de numeros a sumar (Maximo es 50): ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        printf("Ingrese numero (%d): ",i+1);
        scanf("%lf",&numeros[i]);
    }

    //Si quiero configurar cuantos hilos se usa ( con 4 hilos: omp_set_num_threads(4); )
    //Implementacion del paralelismo OpenMP
    #pragma omp parallel for reduction(+:suma)
    for (int i = 0; i < n; i++){
        suma += numeros[i];
    }
    
    printf("Suma Total: %lf",suma);
    
    return 0;
}