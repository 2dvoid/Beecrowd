#include <stdio.h>

int main () {

int i,j;

for (i=1; i<=7; i++) {

    for (j=1; j<=39; j++) {
        if (i==1 || i ==7) printf ("-");
        else if (j==1 || j==39) printf ("|");
        else printf(" ");
    }

    printf ("\n");
}
}