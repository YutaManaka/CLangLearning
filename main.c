#include <stdio.h>

int
main(void)
{
    int i;
    int array[10];

    for (i = 0; i < 10; i++) {
        printf("%d 番目の数値を入力して下さい:", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d\n",array[9 - i]);
    }

    return 0;
}