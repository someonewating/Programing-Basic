#include<stdio.h>
#define N 2/*������*/
#define M 2/*�ܿγ���*/
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
		printf("ѧ��:%d ����:%c �ܳɼ�:%d ", stu[i].num, stu[i].name,ope(stu->grade));
		printf("ƽ���ɼ�:%d", ave);
	}
	return 0;
}
void input(int i)
{
	int j;
	for (i = 0; i < N; i++)
	{
		printf("��%dѧ����ѧ��:", i + 1);
		scanf("%d", &stu[i].num);
		printf("��%dѧ��������:", i + 1);
		scanf("%s", &stu[i].name);
		for (j = 0; j < M; j++)
		{
			printf("��%dѧ���ĵ�%d�γɼ�:", i + 1, j + 1);
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