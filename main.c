#include <stdio.h>

int main(void)
{
    FILE *file, *file2;
    char text[64];
    int i,j;

    file = fopen("test.txt", "w"); // ファイルを開く
    fprintf(file, "Hello,world"); // ファイルに書き込み
    fclose(file); // ファイルを閉じる

    file = fopen("test.txt", "r");
    fscanf(file, "%s", text); // ファイルから文字列を読み込む
    fclose(file);
    printf("%s\n", text); // 文字列を表示する

    file2 = fopen("test2.txt", "w");
    fprintf(file2, "%d,%d", 25, 50); // カンマ区切りで数値をファイルに書き込み
    fclose(file2);

    file2 = fopen("test2.txt", "r");
    fscanf(file2, "%d,%d", &i, &j);
    fclose(file2);
    printf("i = %d : j = %d\n", i, j); // 数値を表示

    return 0;
}