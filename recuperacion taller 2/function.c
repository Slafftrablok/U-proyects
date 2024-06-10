#include <stdio.h>
#include <string.h>
#include "function.h"

void verPersonas(char personas[][4][20]) {
    for (int i = 0; i < 10; i++) {
        printf("Nombre: %s %s\n", personas[i][0], personas[i][1]);
        printf("Cedula: %s\n", personas[i][2]);
        if (strcmp(personas[i][3], "soltero") == 0) {
            printf("Estado Civil: Soltero\n");
        } else {
            printf("Estado Civil: Casado con cedula: %s\n", personas[i][3]);
        }
        printf("---------------------\n");
    }
}

void registrarMatrimonio(char personas[][4][20]) {
    char cedula1[20], cedula2[20];
    printf("Ingrese la cedula de la primera persona: ");
    scanf("%s", cedula1);
    printf("Ingrese la cedula de la segunda persona: ");
    scanf("%s", cedula2);

    int index1 = buscarPersonaXCedula(personas, cedula1);
    int index2 = buscarPersonaXCedula(personas, cedula2);

    if (index1 != -1 && index2 != -1) {
        strcpy(personas[index1][3], cedula2);
        strcpy(personas[index2][3], cedula1);
        printf("Matrimonio registrado exitosamente.\n");
    } else {
        printf("Error: Una o ambas cedulas no existen en el registro.\n");
    }
}

void verificarPersona(char personas[][4][20]) {
    char cedula[20];
    printf("Ingrese la cedula de la persona a verificar: ");
    scanf("%s", cedula);

    int index = buscarPersonaXCedula(personas, cedula);

    if (index != -1) {
        printf("Nombre: %s %s\n", personas[index][0], personas[index][1]);
        printf("Cedula: %s\n", personas[index][2]);
        if (strcmp(personas[index][3], "soltero") == 0) {
            printf("Estado Civil: Soltero\n");
        } else {
            int conyugeIndex = buscarPersonaXCedula(personas, personas[index][3]);
            printf("Estado Civil: Casado con %s %s\n", personas[conyugeIndex][0], personas[conyugeIndex][1]);
        }
    } else {
        printf("Error: Cedula no encontrada en el registro.\n");
    }
}

int buscarPersonaXCedula(char personas[][4][20], char cedula[20]) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(personas[i][2], cedula) == 0) {
            return i;
        }
    }
    return -1;
}