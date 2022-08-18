/**
 * @file segundoEjercicio.c
 * @author Daniel Olarte
 * @brief convertir años, semanas y dias
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
    Escribe un programa en C para convertir los días especificados en años, semanas y días.
*/

#include <stdio.h>
int main()
{
    int dias, semanas, anios;
    printf("Introduzca los dias: ");
    scanf("%d", &dias);
    anios = dias / 365;
    semanas = (dias % 365) / 7;
    dias = (dias % 365) % 7;
    printf("%d dias equivalen a %d anios, %d semanas y %d dias", dias, anios, semanas, dias);
    printf("\n");
    return 0;
}
