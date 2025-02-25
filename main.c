#include <stdio.h>

int
main(void)
{
    int a = 10000, b = 500, c = 3;
    printf("Aは %5d です。\n", a);
    printf("Bは %5d です。\n", b);
    printf("Cは %5d です。\n", c);
    printf("Aは %05d です。\n", a);
    printf("Bは %05d です。\n", b);
    printf("Cは %05d です。\n", c);

    double pi = 3.14159;
    printf("%6.2f\n",pi);
    printf("123456\n");

    return 0;
}