# Fichero para la prueba
# y comparativa de rendimiento 
# solo python con cython

import time 
import Fibo
import FiboCy

print("Calculo con python: ", Fibo.fibonacci_py(4))
print("Calculo con cython: ", FiboCy.fibonacci_py(4))
