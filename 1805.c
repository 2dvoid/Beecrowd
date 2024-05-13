#include <stdio.h>

int main () {

    long long int A,B, sum = 0;

    scanf ("%lld %lld", &A, &B);

    for (; A<=B ; A++) sum+=A;

    printf ("%lld\n", sum);

    return 0;

}