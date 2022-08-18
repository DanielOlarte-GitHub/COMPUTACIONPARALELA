/**
 * @file primerEjercicio.c
 * @author Daniel Olarte
 * @brief producto de 2 numeros
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
    1.- Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.
*/

#include <stdio.h>
int main()
{
    int num1, num2, producto;
    printf("Introduzca el primer entero: ");
    scanf("%d", &num1);
    printf("Introduzca el segundo entero: ");
    scanf("%d", &num2);
    producto = num1 * num2;
    printf("Producto de los dos enteros anteriores = %d", producto);
    printf("\n");
    return 0;
}



