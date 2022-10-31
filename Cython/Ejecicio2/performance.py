# Fichero para la prueba
# y comparativa de rendimiento 
# solo python con cython

import time 
import py_ejercicio2
import cy_ejercicio2

ini_time = time.time()
print("Calculo con python: ", py_ejercicio2.trapezoidal_py(1.1, 1.9, 4000))
fin_time = time.time()

time_python = fin_time - ini_time

print("El tiempo de Python es: ", time_python,"seg")






ini_time = time.time()
print("Calculo con python: ", cy_ejercicio2.trapezoidal_cy(1.1, 1.9, 4000))
fin_time = time.time()

time_cython = fin_time - ini_time

print("El tiempo de Cython es: ", time_cython,"seg")


print("Cython es ", time_python/time_cython," veces más rápido que Python")