#include<stdio.h>
#define N 3
struct student
{
	char name[8];
	char number[6];
	int grade[4];
}stu[N];
int main( )
{
	int i,j;
	for (i = 0; i < N; i++)
	{
		printf("第%d学生的姓名:", i + 1);
		scanf("%s", stu[i].name);
		printf("第%d学生的学号:", i + 1);
		scanf("%s", stu[i].number);
		printf("第%d学生的成绩:", i + 1);
		scanf("%d", stu[i].grade);
	}
	for (i = 0; i < N; i++)
	{
		printf("%5s%10s", stu[i].number, stu[i].name);
		for (j = 1; j <= 3; j++)
			printf("%9d", stu[i].grade[j]);
		printf("\n");
	}
}