#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
} student;

void student_print(student data[], int count);

int main(void)
{
    student data[2];

    data[0].year = 3;
    data[0].clas = 4;
    data[0].number = 18;
    strcpy(data[0].name, "MARIO");
    data[0].stature = 168.2;
    data[0].weight = 72.4;

    data[1].year = 2;
    data[1].clas = 3;
    data[1].number = 15;
    strcpy(data[1].name, "LUIGE");
    data[1].stature = 173.2;
    data[1].weight = 65.4;

    student_print(data, 2);

    return 0;
}

void student_print(student data[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("[学年]:%d\n", data[i].year);
        printf("[クラス]:%d\n", data[i].clas);
        printf("[出席番号]:%d\n", data[i].number);
        printf("[名前]:%s\n", data[i].name);
        printf("[身長]:%f\n", data[i].stature);
        printf("[体重]:%f\n", data[i].weight);
    }

    return;
}