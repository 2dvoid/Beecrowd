#include <stdio.h>

int main() {
    int age, days, month, year;

    scanf("%d", &age);

    year = age / 365;

    month = (age % 365) / 30;

    days = (age % 365) % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);

    return 0;
}