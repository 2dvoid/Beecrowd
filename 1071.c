#include <stdio.h>

int main () {

    int a,b,i,sum=0;

    scanf ("%d %d", &a, &b);


    for (i=++b; i<a; i++) {

        if ((i % 2) !=0) sum+=i;

    }

    printf ("%d\n", sum);
}