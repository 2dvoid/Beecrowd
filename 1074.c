#include <stdio.h>

int main () {

    int a,i;

    scanf ("%d", &a);

    int n[a];

    for (i=0; i<a; i++) {
        scanf ("%d", &n[i]);
    }

    for (i=0; i<a; i++) {
        
            if (n[i]==0) printf ("NULL\n");
            else if (n[i]<0 && ((n[i] % 2) == 0)) printf ("EVEN NEGATIVE\n");
            else if (n[i]<0 && ((n[i] % 2) != 0)) printf ("ODD NEGATIVE\n");
            else if (n[i]>0 && ((n[i] % 2) == 0)) printf ("EVEN POSITIVE\n");
            else if (n[i]>0 && ((n[i] % 2) != 0)) printf ("ODD POSITIVE\n");

    }

}