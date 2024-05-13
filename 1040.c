#include <stdio.h>

int main () {

    float a,b,c,d,e;

    scanf ("%f %f %f %f", &a,&b,&c,&d);

    float avrg = (2*a + 3*b + 4*c + 1*d) / (2+3+4+1);

    printf ("Media: %.1f\n", avrg);

    if (avrg >= 7.0) printf ("Aluno aprovado.\n");
    else if (avrg < 5.0) printf ("Aluno reprovado.\n");
    else {
        
        printf ("Aluno em exame.\n");

        scanf ("%f", &e);
        printf("Nota do exame: %.1f\n", e);

        float final_avrg = (avrg + e) / 2;

        if (final_avrg >= 5.0) printf ("Aluno aprovado.\n");
        else printf ("Aluno reprovado.\n");

        printf ("Media final: %.1f\n", final_avrg);

        
    }
}