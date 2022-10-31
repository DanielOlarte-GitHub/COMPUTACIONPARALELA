from distutils.core import setup
from distutils.extension import Extension
from Cython.Build import cythonize

exts = (cythonize("cy_ejercicio2.pyx"))

setup(ext_modules=exts)