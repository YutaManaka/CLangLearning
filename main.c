#include <stdio.h>

/* ここで定数を宣言 */
#define TAX_RATE 0.03
#define AUTHOR "YutaManaka"

int main(void)
{
    int price;

    printf("本体価格:");
    scanf("%d", &price);
    price = (int)((1 + TAX_RATE) * price); /* 定数使用 */
    printf("税込価格:%d\n", price);

    printf("作者名:%s\n", AUTHOR); /* 定数使用 */

    return 0;
}