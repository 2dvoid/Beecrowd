#include <stdio.h>

int main () {

    double a,b,c,A,B,C;

    scanf ("%lf %lf %lf", &a, &b, &c);

    if (a>b && a>c) {
        A = a;
        B = b;
        C = c;
    }
    else if (b>c && b>a) {
        A = b;
        B = a;
        C = c;
    }
    else if (c>b && c>a) {
         A = c;
         B = b; 
         C = a;
    }
    
    if (A>=B+C) printf ("NAO FORMA TRIANGULO\n");
    else if ((A*A) == (B*B + C*C)) printf ("TRIANGULO RETANGULO\n");
    else if ((A*A) > (B*B + C*C)) printf ("TRIANGULO OBTUSANGULO\n");
    else if ((A*A) < (B*B + C*C)) printf ("TRIANGULO ACUTANGULO\n");
    if (A==B && B==C) printf ("TRIANGULO EQUILATERO\n");
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a)) printf("TRIANGULO ISOSCELES\n");




}