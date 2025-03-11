#include <stdio.h>

int
main(void)
{
    char str[] = "MARIO"; // 宣言時に初期化する時のみ、文字列リテラルを使える
    printf("%s\n", str);

    // 宣言後に代入する場合
    str[0] = 'R';
    str[1] = 'U';
    str[2] = 'I';
    str[3] = 'J';
    str[4] = 'I';
    str[5] = '\0'; // EOS(終端文字)
    printf("%s\n", str);

    return 0;
}