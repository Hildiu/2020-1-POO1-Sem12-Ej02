cmake_minimum_required(VERSION 3.15)
project(Ejemplo_01)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejemplo_01 main.cpp Tipos.h Alumno.cpp Alumno.h Curso.cpp Curso.h Laboratorio.cpp Laboratorio.h Profesor.cpp Profesor.h Seccion.cpp Seccion.h)