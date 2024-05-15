#include <stdio.h>

int main () {

    int a,x,y,i;
    double result;

    scanf ("%d", &a);

    for (i=1;i<=a;i++) {

        scanf ("%d %d", &x, &y);
        if (y==0) printf ("divisao impossivel\n");
        else printf ("%.1lf\n", (float) x/y);

    }

    return 0;

}