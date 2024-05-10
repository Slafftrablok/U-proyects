#include <stdio.h>
#include "function.h"

int main() {
    float initial_amount;
    int months;
    float interest_rate;

    get_user_input(&initial_amount, &months, &interest_rate);

    printf("Mes\tMonto Ahorrado\tIngreso Generado\n");
    printf("---------------------------------------\n");

    calculate_savings_table(initial_amount, months, interest_rate);

    return 0;
}
