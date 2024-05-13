#include <stdio.h>

int main () {

    int val, i, q, m[10000];

    scanf ("%d", &val);

    m[0] = val % 16;
    q = val / 16;

    for (i=1; q > 0; i++) {

        m[i] = q % 16;
        q/=16;

    }

    for (i = i-1; i>=0; i--){
    
        switch (m[i]) {

            case 10:
                printf ("A");
                break;
            case 11:
                printf ("B");
                break;
            case 12:
                printf ("C");
                break;
            case 13:
                printf ("D");
                break;
            case 14:
                printf ("E");
                break;
            case 15:
                printf ("F");
                break;
            default:
                printf ("%d", m[i]);

        }
      



    }

    printf ("\n");
    

}