cmake_minimum_required(VERSION 3.29)
project(C_Programacion_Estructurada)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C_Programacion_Estructurada
        main.c
        Ejercicio1/Ejercicio1.h
        Ejercicio1/Ejercicio1.c
        Ejercicio2/Ejercicio2.h
        Ejercicio2/Ejercicio2.c
        Ejercicio3/Ejercicio3.h
        Ejercicio3/Ejercicio3.c
        Ejercicio4/Ejercicio4.h
        Ejercicio4/Ejercicio4.c
        Ejercicio5/Ejercicio5.h
        Ejercicio5/Ejercicio5.c)
