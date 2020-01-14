#define N 5
#include <stdio.h>
struct student
{
    char num[6];
    char name[8];
    int score[4];/*注意，考虑到下标从 1 开始，有三门课程成绩 score[3]所以设定 分数的数组长度加 1, score[4]，防止数据溢出*/
}stu[N];
void main( )
{
    int i,j ;
    for(i=0;i<N;i++)
    {
        printf("\nInput score of student %d:\n",i+1);
        printf("NO.:");
        scanf("%s", stu[i].num);
        printf("name:");
        scanf("%s", stu[i].name);
        for(j=1;j<=3;j++)
        {
            printf("score %d:",j);
            scanf("%d",&stu[i].score[j]);
        }
        printf("\n");
    }
    for (i = 0; i < N; i++)
    {
        printf("%5s%10s", stu[i].num, stu[i].name);
        for (j = 1; j <= 3; j++)
            printf("%9d", stu[i].score[j]);
        printf("\n");
    }
} 