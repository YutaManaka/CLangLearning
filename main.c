#include <stdio.h>

int
main(void)
{
    printf("%d\n", 10 + 3);
    printf("%d\n", 10 - 3);
    printf("%d\n", 10 * 3);
    printf("%d\n", 10 / 3); // 端数は切り捨て
    printf("%d\n", 10 % 3);
    printf("%d\n", (1 + 100) * 100 / 2);
    return 0;
}