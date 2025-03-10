#include <stdio.h>

int
main(void)
{
    int point;

    do {
        printf("点数？:");
        scanf("%d", &point);
    } while (point < 0 || point > 100);

    printf("点数は %03d 点です。\n", point);

    return 0;
}