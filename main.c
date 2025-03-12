#include <stdio.h>

int main(void)
{
    int *data;
    int i, average = 0, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    data = array; /* ポインタ変数に配列のアドレスを代入 */

    for (i = 0; i < 10; i++)
    {
        average += data[i]; /* 配列みたいに使える */
        // average += *(data + i); // これも同じ(ポインタ演算)
    }

    // こういう書き方もあり(ポインタ演算)
    // for (data = array; data != &array[10]; data++)
    // {
    //     average += *data;
    // }

    printf("%d\n", average / 10);
    return 0;
}