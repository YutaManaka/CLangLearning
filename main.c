#include <stdio.h>

int
main(void)
{
    char str[256];
    printf("文字を入力してください：");
    scanf("%s", &str[0]); // 0番の要素のアドレス
    printf("%s\n", str); // 1文字目から挿入される

    char str2[256] = "DRAGON";
    printf("文字を入力してください：");
    scanf("%s", &str2[6]); // 6番の要素のアドレス
    printf("%s\n", str2); // 7文字目から挿入される

    return 0;
}