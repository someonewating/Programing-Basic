#include<stdio.h>
#define N 2/*总人数*/
#define M 2/*总课程数*/
void input(int i);
int ope(int *p);
struct student
{
	int num;
	char name;
	int grade[N+1];
}stu[N];
int main()
{
	int i,ave;
	input(0);
	ave = ope(stu->grade) / N;
	for (i = 0; i < N; i++)
	{
		printf("学号:%d 姓名:%c 总成绩:%d ", stu[i].num, stu[i].name,ope(stu->grade));
		printf("平均成绩:%d", ave);
	}
	return 0;
}
void input(int i)
{
	int j;
	for (i = 0; i < N; i++)
	{
		printf("第%d学生的学号:", i + 1);
		scanf("%d", &stu[i].num);
		printf("第%d学生的姓名:", i + 1);
		scanf("%s", &stu[i].name);
		for (j = 0; j < M; j++)
		{
			printf("第%d学生的第%d课成绩:", i + 1, j + 1);
			scanf("%d", &stu[i].grade[j]);
		}
	}
}
int ope(int *p)
{
	int j, sum[M],i;
	for (i = 0; i < N; i++)
	{
		sum[i] = 0;
		for (j = 0; j < M; j++)
			sum[i] = stu[i].grade[j] + sum[i];
	}
	p = sum;
}