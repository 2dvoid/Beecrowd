#include <stdio.h>

int main() {
    double old_sal, incrs, prcnt;

    scanf("%lf", &old_sal);

    if (old_sal >= 0 && old_sal <= 400)
        prcnt = 15;
    else if (old_sal > 400 && old_sal <= 800)
        prcnt = 12;
    else if (old_sal > 800 && old_sal <= 1200)
        prcnt = 10;
    else if (old_sal > 1200 && old_sal <= 2000)
        prcnt = 7;
    else if (old_sal > 2000)
        prcnt = 4;

    incrs = (old_sal * prcnt) / 100;

    printf("Novo salario: %.2lf\n", old_sal + incrs);
    printf("Reajuste ganho: %.2lf\n", incrs);
    printf("Em percentual: %.0lf %%\n", prcnt);

    return 0;
}