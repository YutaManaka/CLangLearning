#include <stdio.h>

int
main(void)
{
    int left;
    int right;
    int value;
    left = 10;
    right = 3;
    printf("%d\n", left + right);
    printf("%d\n", left - right);
    printf("%d\n", left * right);
    printf("%d\n", left / right);
    printf("%d\n", left % right);
    value = 10;
    printf("%d\n", value);
    value++;
    printf("%d\n", value);
    value--;
    printf("%d\n", value);
    return 0;
}