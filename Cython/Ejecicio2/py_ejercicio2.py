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


def funcional(x):
    return exp(-x)*sin(x)+5*x

def trapezoidal_py(a, b, n):
    h = float(b-a)/n
    result = 0.5*funcional(a) + 0.5*funcional(b)
    for i in range(1, n):
        result += funcional(a + i*h)
    result *= h
    return result
    