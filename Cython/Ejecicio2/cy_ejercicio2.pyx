#cython: language_level=3
''' 
Fecha: 28/10/2017
Autor: Daniel Alejandro Olarte Ávila
Ejercicio 2
Tema: Funcion para el calcular el area bajo la curva con la funcion trapezoidal

'''
#trapezoidal(a, b, n)
#Para el estudio del area bajo la curva se utilizara e⁻x sin(x) + 5x
#Se usara numpy para la funcion exponencial

import numpy as np
from numpy import exp, sin


def funcional(double x):
    return exp(-x)*sin(x)+5*x

def trapezoidal_cy(double a, double b, int n):
    cdef int i
    cdef double h = float(b-a)/n
    cdef double resultado = 0.5 * funcional(a) + 0.5 * funcional(b)

    for i in range(1, n):
        resultado += funcional(a + i*h)

    resultado *= h
    return resultado