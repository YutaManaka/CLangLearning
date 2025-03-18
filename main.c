#include <stdio.h>

int
main(void)
{
    const double TAX_RATE = 0.05; // 定数を定義
    int price;

    printf("本体価格:");
    scanf("%d", &price);
    price = (int)((1 + TAX_RATE) * price); // 定数を利用
    printf("税込価格:%d\n", price);

    // enumは数値しか使えない
    // 値を指定しない場合、0から1ずつ増えた値が代入される
    // どこかで数値を指定した場合、そこは指定した数値、以後は1ずつ増やした値
    enum {
        STATE_NORMAL, /* 通常 */
        STATE_POISON, /* 毒 */
        STATE_NUMBLY = 7, /* マヒ */
        STATE_CURSE /* 呪い */
    };

    printf("通常:%d\n", STATE_NORMAL);
    printf("毒:%d\n", STATE_POISON);
    printf("マヒ:%d\n", STATE_NUMBLY);
    printf("呪い:%d\n", STATE_CURSE);

    return 0;
}