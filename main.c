#include <stdio.h>

int get_olympic_type(int); /* プロトタイプ宣言 */

enum {
        NONE = 0, // 開催なし
        SUMMER = 1, // 夏
        WINTER = 2, // 冬
};

int main(void)
{
    int year;
    int result;

    printf("西暦？:");
    scanf("%d", &year);

    result = get_olympic_type(year);

    switch (result) {
        case SUMMER:
            printf("%d年は夏季オリンピックが開催されます。\n", year);
            break;
        case WINTER:
            printf("%d年は冬季オリンピックが開催されます。\n", year);
            break;
        case NONE:
            printf("%d年はオリンピックは開催されません。\n", year);
            break;
    };
    return 0;
}

int get_olympic_type(int year)
{
    int result;

    if (year % 4 == 0) {
        result = SUMMER; // 夏
    } else if (year % 4 == 2) {
        result = WINTER; // 冬
    } else {
        result = NONE; // 開催なし
    }
    return result;
}