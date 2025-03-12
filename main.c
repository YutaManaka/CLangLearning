#include <stdio.h>

// プロトタイプ宣言
void func(int* pvalue);
int get_average(int data[]);

int main(void)
{
    // 変数を書き換える
    int value = 10;
    printf("&value = %p\n", &value);
    func(&value); /* アドレスを渡す */
    printf("value = %d\n", value);

    // 配列の平均値を求める
    int average, array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };
    printf("array[3] = %d\n", array[3]);
    average = get_average(array);
    printf("array[3] = %d\n", array[3]);
    printf("%d\n", average);

    return 0;
}

void func(int* pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 100; /* 通常変数モードに切り替えて代入 */
    return;
}

int get_average(int data[])
{
    int i, average = 0;
    for (i = 0; i < 10; i++) {
        average += data[i];
    }
    data[3] = 111; /* 引数の配列の値を変更 */
    return average / 10;
}