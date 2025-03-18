#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("%s\n", argv[0]); // アプリケーション自身のファイル名を表示

    if (argc > 1) {
        printf("%s\n", argv[1]); // ドラッグされたファイル名を表示
    }

    fflush(stdin);
    getchar();

    return 0;
}