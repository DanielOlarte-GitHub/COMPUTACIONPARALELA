/**
 * @file novenoEjercicio.c
 * @author Daniel Olarte
 * @brief resta de matriz de aleatorios 
 * @version 0.1
 * @date 2022-08-16
 * @copyright Copyright (c) 2022
   Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
   tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
   Finalmente, se presenta la resta de las dos matrices.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf("Introduce el tamaño de la matriz: ");
    scanf("%d", &n);
    if (n > 8){
        printf("El tamaño de la matriz no puede ser mayor a 8");
    }
    else{
        //crea la matriz
        int matriz1[n][n];
        int matriz2[n][n];
        //rellena la matriz
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                matriz1[i][j] = rand() % 10;
                matriz2[i][j] = rand() % 10;
            }
        }

        //resta las matrices
        int resta[n][n];
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                resta[i][j] = matriz1[i][j] - matriz2[i][j];
            }
        }

        //muestra las matrices
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                printf("%d ", matriz1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                printf("%d ", matriz2[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                printf("%d ", resta[i][j]);
            }
            printf("\n");
        }

        
        
    }
    return 0;
}
