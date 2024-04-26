#include <stdio.h>


int float calcularPagoTotal(float monto, float tasaInteres, int tiempo, int ano) {
    float pagoAnual = monto * (1 + tasaInteres / 100 * ano);
    return pagoAnual;
}


int float calcularPagoMensual(float pagoAnual, int tiempo) {
    float pagoMensual = pagoAnual / (tiempo * 12);
    return pagoMensual;
}



int main() {
    float monto, tasaInteres;
    int tiempo;

    
    printf("Ingrese el monto del credito: ");
    scanf("%f", &monto);
    printf("Ingrese la tasa de interes (porcentaje): ");
    scanf("%f", &tasaInteres);
    printf("Ingrese el tiempo en anos: ");
    scanf("%d", &tiempo);

    
    printf("\n| Anio | Interes | Meses a pagar |\n");
    printf("|------|---------|---------------|\n");
    for (int i = 1; i <= tiempo; i++) {
        float pagoAnual = calcularPagoTotal(monto, tasaInteres, tiempo, i);
        float pagoMensual = calcularPagoMensual(pagoAnual, tiempo);
        printf("| %-4d | %-7f | %-13f |\n", i, pagoAnual, pagoMensual);
    }

    return 0;
}
