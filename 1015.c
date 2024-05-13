#include <stdio.h>
#include <math.h>

int main () {

    double x1, x2, y1, y2, a, b, tmp, dis;

    scanf ("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    a = x2-x1;
    b = y2-y1;
    tmp = (a*a) + (b*b);
 
    dis = sqrt (tmp);

    printf ("%.4lf\n", dis);

    return 0;
}