#include <stdio.h>
#include <stdlib.h>

float calcular_area_triangular(float x1, float y1, float x2, float y2, float x3, float y3) {
    return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2);
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    float area;

    printf("Ingrese las coordenadas del primer punto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Ingrese las coordenadas del segundo punto (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Ingrese las coordenadas del tercer punto (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    area = calcular_area_triangular(x1, y1, x2, y2, x3, y3);

    printf("El área del triángulo es: %f\n", area);

    
return 0;
}