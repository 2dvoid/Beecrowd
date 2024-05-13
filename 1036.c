    #include <stdio.h>
    #include <math.h>

    int main () {

        double a,b,c,x,y,r1,r2;

        scanf ("%lf %lf %lf", &a, &b, &c);

        x = (b*b - 4*a*c);
        y = (2*a);


        r1 = ((-b) + sqrt (x)) / y;
        r2 = ((-b) - sqrt (x)) / y;
        
        if (x < 0 || y == 0) printf ("Impossivel calcular\n");
        else printf ("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);

        return 0;


    }