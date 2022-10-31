# Fecha: 26 de Octubre 2022
# Autor: Daniel Olarte Ávila
# Tema: Funcion Fibuonacci en Cython
# Materia: Parallel and distributed Computing

def fibonacci_py(int n):
	cdef int i
	cdef double a = 0.0, b = 1.0
	for i in range(n):
		a, b = a+b, a
	return a
