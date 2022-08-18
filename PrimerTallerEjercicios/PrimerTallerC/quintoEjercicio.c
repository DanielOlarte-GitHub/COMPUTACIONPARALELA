/**
 * @file quintoEjercicio.c
 * @author Daniel Olarte
 * @brief triangulo rectangulo con asteriscos
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
    Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un
    asterisco. La cantidad de líneas del triangulo es ingresada por consola por el usuario, y el valor
    máximo de líneas es de 14.
*/

#include <stdio.h>

int main()
{
    //declaracion de variables
    int lineas;
    //pedir al usuario la cantidad de lineas
    printf("Introduce la cantidad de lineas del triangulo: ");
    scanf("%d", &lineas);
    //maximo 14 lineas
    if (lineas > 14){//si el numero de lineas es mayor a 14
        printf("El numero de lineas no puede ser mayor a 14");
    }
    else{//si el numero de lineas es menor a 14
        
        
        int i = 0;
        //bucle para mostrar el triangulo
        while(i < lineas){
            int j = 0;
            while(j < i+1){
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
    }

    return 0;
}