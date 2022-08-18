/**
 * @file septimoEjercicio.c
 * @author Daniel Olarte
 * @brief matriz de aleatorios
 * @version 0.1
 * @date 2022-08-16 
 * @copyright Copyright (c) 2022
   Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de
   de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j;
    printf("Introduce el tamaño de la matriz: ");
    scanf("%d", &n);
    if (n > 8){
        printf("El tamaño de la matriz no puede ser mayor a 8");
    }
    else{
        srand(time(NULL));
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                printf("%d ", rand() % 10);
            }
            printf("\n");
        }
    }
    return 0;
}
