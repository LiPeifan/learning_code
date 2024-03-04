#include <stdio.h>

struct student
{
    int id;
    char name[10];
    double score[3];
};

int main()
{
    double sum = 0, avaerage;
    struct student student01;
    printf("输入学生的ID：");
    scanf("%d", &student01.id);
    printf("输入学生的姓名：");
    scanf("%s", student01.name);
    for(int i = 0; i < 3; i++)
    {
        printf("输入第%d门课的成绩：", i+1);
        scanf("%lf", &student01.score[i]);
        sum += student01.score[i];
    }
    avaerage = sum / 3;

    printf("平均分为%.2lf\n", avaerage);

}
