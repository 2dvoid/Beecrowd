#include <stdio.h>

int main() {
    int i;
    char val, alph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                          'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                          'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    scanf("%c", &val);

    for (i = 0; i < 26; i++) {
        if (alph[i] == val) printf("%d\n", i + 1);
    }

    return 0;
}