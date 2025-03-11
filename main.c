#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
    // 文字列の入力、文字数のカウント
    char last_name[32], first_name[32];
    printf("苗字を入力してください：");
    scanf("%32s", last_name);
    printf("名前を入力してください：");
    scanf("%32s", first_name);

    // 文字列の連結
    printf("あなたの名前は%s\n", strcat(last_name, first_name));

    return 0;
}