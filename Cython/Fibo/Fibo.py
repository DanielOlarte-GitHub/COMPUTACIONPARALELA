# Fecha: 26 de Octubre 2022
# Autor: Daniel Olarte Ávila
# Tema: Parallel and distributed Computing

def fibonacci_py(n):
	a, b = 0.0, 1.0
	for i in range(n):
		a, b = a+b, a
	return a
