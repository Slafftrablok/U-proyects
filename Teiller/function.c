#include <stdio.h>
#include "function.h"

void get_user_input(float *initial_amount, int *months, float *interest_rate) {
    printf("Ingrese el monto inicial: ");
    scanf("%f", initial_amount);

    printf("Ingrese el número de meses: ");
    scanf("%d", months);

    printf("Ingrese el interés anual: ");
    scanf("%f", interest_rate);
}

void calculate_savings_table(float initial_amount, int months, float interest_rate) {
    float total_amount = initial_amount;
    float monthly_interest, monthly_income;

    for (int i = 1; i <= months; i++) {
        monthly_interest = (total_amount * interest_rate) / 12;
        total_amount += monthly_interest;
        monthly_income = total_amount - initial_amount;
        printf("%d\t%.2f\t\t%.2f\n", i, total_amount, monthly_income);
    }

    printf("\nTotal:\t%.2f\t\t%.2f\n", total_amount, total_amount - initial_amount);
}
