#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[64];  /* 名前 */
    int age; /* 年齢 */
    char sex[6];  /* 性別 */
} people;

void input_people(people *data);
void print_people(people data[]);

int main(void)
{
    people data[3];
    int i;
    for (i = 0; i < 2; i++)
    {
        input_people(&data[i]);
    }

    for (i = 0; i < 2; i++)
    {
        print_people(&data[i]);
    }

    return 0;
}

void input_people(people *data)
{
    printf("名前:");
    scanf("%s", data->name);
    printf("年齢:");
    scanf("%d", &data->age);
    printf("性別:");
    scanf("%s", data->sex);

    return;
}

void print_people(people data[])
{
    printf("[名前]:%s\n", data->name);
    printf("[年齢]:%d\n", data->age);
    printf("[性別]:%s\n", data->sex);

    return;
}