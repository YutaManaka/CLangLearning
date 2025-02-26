#include <stdio.h>

int
main(void)
{
    int fixed_price, ten_percent_off_price, thirty_percent_off_price, fifty_percent_off_price, eighty_percent_off_price;

    /* 入力部分 */
    printf("定価を入力して下さい。:");
    scanf("%d", &fixed_price);

    /* 計算部分 */
    ten_percent_off_price    = (int)(fixed_price * (100 - 10) / 100);
    thirty_percent_off_price = (int)(fixed_price * (100 - 30) / 100);
    fifty_percent_off_price  = (int)(fixed_price * (100 - 50) / 100);
    eighty_percent_off_price = (int)(fixed_price * (100 - 80) / 100);

    /* 表示部分 */
    printf(
        "1割引価格：%d\n3割引価格：%d\n5割引価格：%d\n8割引価格：%d\n",
        ten_percent_off_price,
        thirty_percent_off_price,
        fifty_percent_off_price,
        eighty_percent_off_price
    );
    return 0;
}