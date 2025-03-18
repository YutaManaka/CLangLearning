#include <stdio.h>

int
main(void)
{
    // 数値をバイナリファイルに書き込み
    int buf = 100;
    FILE *file;
    file = fopen("test.dat", "wb");
    fwrite(&buf, sizeof(buf), 1, file);
    fclose(file);

    // 数値の配列をバイナリファイルに書き込み
    int numbers[] = {10, 100, 1000, 10000};
    FILE *file2;
    file2 = fopen("test2.dat", "wb");
    fwrite(numbers, sizeof(numbers), 1, file2);
    fclose(file2);

    int number;
    // バイナリファイルから数値を読みこむ
    file = fopen("test2.dat", "rb");
    fread(&number, sizeof(number), 1, file);
    fclose(file);

    printf("%d\n", number);

    return 0;
}