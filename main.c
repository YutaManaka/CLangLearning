#include <stdio.h>

int get_olympic_type(int); /* プロトタイプ宣言 */

int main(void)
{
    int year;
    int result;

    printf("西暦？:");
    scanf("%d", &year);

    result = get_olympic_type(year);

    switch (result) {
        case 1:
            printf("%d年は夏季オリンピックが開催されます。\n", year);
            break;
        case 2:
            printf("%d年は冬季オリンピックが開催されます。\n", year);
            break;
        case 0:
            printf("%d年はオリンピックは開催されません。\n", year);
            break;
    };

    return 0;
}

int get_olympic_type(int year)
{
    int result;

    if (year % 4 == 0) {
        result = 1; // 夏
    } else if (year % 4 == 2) {
        result = 2; // 冬
    } else {
        result = 0; // 開催なし
    }
    return result;
}