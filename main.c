#include <stdio.h>

int
main(void)
{
    int number;
    scanf("%d", &number);

    if (number >= 8 && number <= 12)
        printf("8～12の間です。\n");

    if (!(number >= 8 && number <= 12))
        printf("8～12の間ではありません。\n");

    return 0;
}