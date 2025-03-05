#include <stdio.h>

int
main(void)
{
    int year;
    printf("西暦年を入力して下さい:");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("%d年は夏季オリンピックが開催されます。\n", year);

    if (year % 4 == 2)
        printf("%d年は冬季オリンピックが開催されます。\n", year);

    if (year % 4 == 1 || year % 4 == 3)
        printf("%d年はオリンピックは開催されません。\n", year);

    return 0;
}