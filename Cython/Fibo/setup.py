# Fichero para la creacion del objeto Compartido
from distutils.core import setup, Extension
from Cython.Build import cythonize

exts= (cythonize("FiboCy.pyx"))

setup(ext_modules=exts)

