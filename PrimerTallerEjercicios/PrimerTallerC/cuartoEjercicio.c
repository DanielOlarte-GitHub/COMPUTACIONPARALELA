/**
 * @file cuartoEjercicio.c
 * @author Daniel Olarte
 * @brief 10 primeros numeros
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
    Escribe un programa en C para mostrar los 10 primeros números naturales.
*/
#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 10){
        printf("%d\n", i+1);
        i++;
    }
    return 0;
}