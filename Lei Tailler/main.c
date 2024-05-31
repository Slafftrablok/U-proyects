#include <stdio.h>
#include "function.h"

#define MAX_JUGUETES 100

int main() {
    Juguete juguetes[MAX_JUGUETES];
    int contador = 0;
    int opcion;

    do {
        printf("\nSistema de Inventario de Juguetes\n");
        printf("1. Ingresar Juguete\n");
        printf("2. Editar Juguete\n");
        printf("3. Eliminar Juguete\n");
        printf("4. Listar Juguetes\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresar_juguete(juguetes, &contador);
                break;
            case 2:
                editar_juguete(juguetes, contador);
                break;
            case 3:
                eliminar_juguete(juguetes, &contador);
                break;
            case 4:
                listar_juguetes(juguetes, contador);
                break;
            case 5:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opción no válida, por favor intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
