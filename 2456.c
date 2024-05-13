#include <stdio.h>

int main() {
    int i, val[5];

    scanf("%d %d %d %d %d", &val[0], &val[1], &val[2], &val[3], &val[4]);

    if (val[0] > val[1] && val[1] > val[2] && val[2] > val[3] &&
        val[3] > val[4])
        printf("D\n");
    else if (val[0] < val[1] && val[1] < val[2] && val[2] < val[3] &&
             val[3] < val[4])
        printf("C\n");
    else
        printf("N\n");

    return 0;
}