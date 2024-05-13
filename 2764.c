#include <stdio.h>

int main () {

    int d1, d2, m1, m2, y1, y2;

    scanf ("%1d%1d/%1d%1d/%1d%1d", &d1, &d2, &m1, &m2, &y1, &y2);

    printf ("%d%d/%d%d/%d%d\n", m1, m2, d1, d2, y1, y2);
    printf ("%d%d/%d%d/%d%d\n", y1, y2, m1, m2, d1, d2);
    printf ("%d%d-%d%d-%d%d\n", d1, d2, m1, m2, y1, y2);

    return 0;

}