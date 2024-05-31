#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    char nombre[50];
    int cantidad;
    float precio;
} Juguete;





void ingresar_juguete(Juguete juguetes[], int *contador);
void editar_juguete(Juguete juguetes[], int contador);
void eliminar_juguete(Juguete juguetes[], int *contador);
void listar_juguetes(Juguete juguetes[], int contador);

#endif 
