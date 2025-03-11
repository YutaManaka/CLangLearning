#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
    // 文字列を数値に変換
    char str[] = "145";
    int num = atoi(str);
    printf("%d\n", num);

    // 文字列のコピー・代入
    char str0[10];
    strcpy(str0, "MARIO");
    printf("%s\n", str);

    // 先頭から任意の文字数だけコピー
    char str1[] = "MARIO", str2[10];
    strncpy(str2, str1, 3);
    str2[3] = '\0'; /* EOSを付加 */
    printf("%s\n", str2);

    // 文字リテラルの連結
    char str3[] = "DRAGON""QUEST";
    printf("%s\n", str3);

    // 文字列の連結
    char str4[12] = "DRAGON";
    char str5[] = "QUEST";
    strcat(str4, str5);
    printf("%s\n", str4);

    // 文字列と数値を連結
    char str6[16];
    char str7[12] = "DRAGON";
    char str8[] = "QUEST";
    int i = 3;
    sprintf(str6, "%s%s%d\n", str7, str8, i);
    printf("%s", str6);

    // 文字列の入力、文字数のカウント
    char str9[32];
    printf("文字を入力してください：");
    scanf("%32s", str9);
    for (i = 0; str9[i] != '\0'; i++);
    printf("%sは%d文字です。\n", str9, i);

    // 文字列のカウント
    int j;

    char str10[256];
    printf("文字を入力してください：");
    scanf("%s", str10);
    j = strlen(str10);
    printf("%sは%d文字です。\n", str10, j);

    // 文字列の比較
    int len, k;
    char str11[256], str12[] = "DRAGONQUEST";
    printf("文字を入力してください：");
    scanf("%s", str11);

    len = strlen(str12);

    for (k = 0; k < len + 1; k++) {
        if (str11[k] != str12[k]) break;
    }

    if (k == len + 1) {
        printf("同じ\n");
    } else {
        printf("違う\n");
    }

    // 文字列の比較
    char str13[256], str14[] = "DRAGONQUEST";
    printf("文字を入力してください：");
    scanf("%s", str13);

    if (strcmp(str13, str14) == 0) {
        printf("同じ\n");
    } else {
        printf("違う\n");
    }

    return 0;
}