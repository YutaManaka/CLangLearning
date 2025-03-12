#include <stdio.h>

void get_max_and_min(int array[], int *max, int *min);

int main(void)
{
    int i = 0, num = 0, max = 0, min = 0;
    int array[10];
    do {
        printf("数字を入力してください:");
        scanf("%d", &num);
        array[i] = num;
        i++;
    } while (num > 0);

    get_max_and_min(array, &max, &min);

    printf("最大値 %d : 最小値 %d\n", max, min);

    return 0;
}

void get_max_and_min(int array[], int *max, int *min)
{
    int i = 0;

    *max = 0;
    *min = 100;

    while (array[i] != -1)
    {
        if (array[i] > *max) *max = array[i];
        if (array[i] < *min) *min = array[i];
        i++;
    }
}