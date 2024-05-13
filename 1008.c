#include <stdio.h>

int main() {
    int num, hr;
    float amount, sal;

    scanf("%d %d %f", &num, &hr, &amount);

    sal = hr * amount;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sal);

    return 0;
}