#include <stdio.h>

int
main(void)
{
    int number;
    scanf("%d", &number);

    if (number == 10)
        printf("入力値は10です。\n");
    else
        printf("入力値は10ではありません。\n");

    return 0;
}