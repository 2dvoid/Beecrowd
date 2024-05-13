#include <stdio.h>

int main() {

    int hr, min, sec, secs, st_day, end_day, st_time[3], end_time[3], time[3];

    scanf("Dia %d", &st_day);
    scanf("%d:%d:%d", &st_time[0], &st_time[1], &st_time[2]);
    scanf("Dia %d", &end_day); // Corrected to include "Dia" in the format string
    scanf("%d:%d:%d", &end_time[0], &end_time[1], &end_time[2]);

    secs = ((st_time[0] * 3600) + (st_time[1] * 60) + st_time[2]) - ((end_time[0] * 3600) + (end_time[1] * 60) + end_time[2]);

    if (secs < 0)
        secs *= -1;

    printf("%d dia(s)\n", end_day - st_day - 1);

    hr = secs / 3600;
    min = (secs % 3600) / 60;
    sec = (secs % 3600) % 60;

    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);

    return 0;
}
