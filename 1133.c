#include <stdio.h>

int main () {

    int max,min;

    scanf ("%d %d", &max, &min);

    if (min>max) {

        int tmp = max;
        max = min;
        min = tmp;  
        
    }

    for (int i = min+1; i<max; i++) {


        if ((i % 5)==2 || (i % 5)==3) printf ("%d\n", i);

    }

}