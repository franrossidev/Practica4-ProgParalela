#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 3

int main(){
    int Mat[N][N], Mat2[N][N], MatResultado[N][N];
    int i,j;
    srand(1234);
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            Mat[i][j] = rand() % 10;
            Mat2[i][j] = rand() % 10; 
        }
    }


    //Implementacion del paralelismo OpenMP
    #pragma omp parallel for private(j, k)
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {

            MatResultado[i][j] = 0;
            for (int k = 0; k < N; k++) {
                MatResultado[i][j] += Mat[i][k] * Mat2[k][j];
            }

        }
    }
    printf("Matriz 1:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", Mat[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", Mat2[i][j]);
        }
        printf("\n");
    }
    printf("Matriz resultado:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", MatResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}