#include <stdio.h>
#include <string.h>
#include "function.h"



void ingresar_juguete(Juguete juguetes[], int *contador) {
    printf("Ingrese el nombre del juguete: ");
    scanf("%s", juguetes[*contador].nombre);
    printf("Ingrese la cantidad: ");
    scanf("%d", &juguetes[*contador].cantidad);
    printf("Ingrese el precio: ");
    scanf("%f", &juguetes[*contador].precio);
    (*contador)++;
    printf("Juguete ingresado exitosamente.\n");
}

void editar_juguete(Juguete juguetes[], int contador) {
    char nombre[50];
    printf("Ingrese el nombre del juguete a editar: ");
    scanf("%s", nombre);

    for (int i = 0; i < contador; i++) {
        if (strcmp(juguetes[i].nombre, nombre) == 0) {
            printf("Ingrese el nuevo nombre: ");
            scanf("%s", juguetes[i].nombre);
            printf("Ingrese la nueva cantidad: ");
            scanf("%d", &juguetes[i].cantidad);
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &juguetes[i].precio);
            printf("Juguete editado exitosamente.\n");
            return;
        }
    }
    printf("Juguete no encontrado.\n");
}

void eliminar_juguete(Juguete juguetes[], int *contador) {
    char nombre[50];
    printf("Ingrese el nombre del juguete a eliminar: ");
    scanf("%s", nombre);

    for (int i = 0; i < *contador; i++) {
        if (strcmp(juguetes[i].nombre, nombre) == 0) {
            for (int j = i; j < (*contador) - 1; j++) {
                juguetes[j] = juguetes[j + 1];
            }
            (*contador)--;
            printf("Juguete eliminado exitosamente.\n");
            return;
        }
    }
    printf("Juguete no encontrado.\n");
}

void listar_juguetes(Juguete juguetes[], int contador) {
    printf("Listado de Juguetes:\n");
    for (int i = 0; i < contador; i++) {
        printf("Nombre: %s, Cantidad: %d, Precio: %.2f\n", juguetes[i].nombre, juguetes[i].cantidad, juguetes[i].precio);
    }
}
