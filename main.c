//
// Created by pinchiguillo on 19/11/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Ejercicio 1a
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Ejercicio 3
struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}


// Ejercicio 5a
void imprimirEstudiante(struct Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// Ejercicio 5b
void modificarEstudiante(struct Estudiante *est) {
    est->edad = 30;
}

// Ejercicio 5c
void imprimirEstudiante2(struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {


    // Ejercicio 1b
    struct Estudiante estudiante1;
    (estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    // Ejercicio 1c
    struct Estudiante *estudiante2 = (struct Estudiante *) (sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    // Ejercicio 1d
    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

    // Ejercicio 2
    union Dato {
        int i;
        float f;
        char str[20];
    };

    union Dato dato;

    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);


    // Ejercicio 4
    typedef struct Estudiante Estudiante;

    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    // Ejercicio 5a
    imprimirEstudiante(estudiante1);

    // Ejercicio 5b
    modificarEstudiante(&estudiante1);

    // Ejercicio 5c
    imprimirEstudiante2(&estudiante1);

    return 0;
}
