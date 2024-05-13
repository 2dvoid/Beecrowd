// Not Accepted

#include <stdio.h>

int main() {
    
    float input;
    int i, q, r;
    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};
    int arr_lng = sizeof(notes) / sizeof(notes[0]);

    scanf("%f", &input);

    printf("NOTAS:\n");

    
    r = (int)(input * 100);

    for (i = 0; i < arr_lng; i++) {
        q = r / notes[i];
        printf("%d nota(s) de R$ %.2f\n", q, notes[i] / 100.0);
        r = r % notes[i];
    }

    printf("MOEDAS:\n");

    
    int cents_remainder = r;

    for (i = 0; i < arr_lng; i++) {
        q = cents_remainder / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", q, coins[i] / 100.0);
        cents_remainder = cents_remainder % coins[i];
    }

    return 0;
}
