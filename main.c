#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int* heap;
    // 動的配列を定義
    heap = (int*)malloc(sizeof(int) * 10);
    if (heap == NULL) exit(0);

    for (i = 0; i < 10; i++) {
        heap[i] = i;
    }

    printf("%d\n", heap[5]);

    // 動的配列の要素数を変更
    heap = (int*)realloc(heap, sizeof(int) * 100);

    free(heap);

    return 0;
}
