/**
 * @file tercerEjercicio.c
 * @author Daniel Olarte
 * @brief distancia entre 2 puntos
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
    Escribe un programa en C para calcular la distancia entre los dos puntos.
  
*/
#include <stdio.h>

//funcion para hallar la raiz cuadrada manualmente
float raiz(float numero){
    float resultado = 0;
    int i = 0;
    while(resultado*resultado < numero){
        resultado += 0.1;
        i++;
    }
    return resultado;
}




int main()
{
    int x1, x2, y1, y2;
    printf("Introduce la coordenada x del primer punto: ");
    scanf("%d", &x1);
    printf("Introduce la coordenada y del primer punto: ");
    scanf("%d", &y1);
    printf("Introduce la coordenada x del segundo punto: ");
    scanf("%d", &x2);
    printf("Introduce la coordenada y del segundo punto: ");
    scanf("%d", &y2);
    float result =  raiz((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("La distancia entre los dos puntos es: %f", result);
    printf("\n");
    return 0;
}
