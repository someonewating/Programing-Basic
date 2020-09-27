#include<stdio.h>
#include<conio.h>
#include<string.h>
int n = 0;
struct student
{
	int num;
	char name[20];
	int score;
};
void read_score(int a[]);
void read_keyboard(int a[]);
void read_file(struct student s[]);
void sort(int a[]);
void average(int a[]);
void classify(int* a);
void print_score(struct student s[]);
void save_file(struct student* s);
main()
{
	int i, k, a[201];
	char ch;
	struct student s[201];
	FILE* fp;
	for (i = 1; i < 201; i++)
		a[i] = 0;
	while (1)
	{
		printf("\n");
		printf("\t*scores managing system*\n");
		printf("\t*1.read_keyboard*\n");
		printf("\t*2.sort*\n");
		printf("\t*3.average*\n");
		printf("\t*4.classify*\n");
		printf("\t*5.read_file*\n");
		printf("\t*6.print*\n");
		printf("\t*7.save_file*\n");
		printf("\t*0.exit*\n");
		printf("\tinput the selection:");
		ch = getche();
		i = ch - '0';
		switch (i)
		{
		case 1:read_keyboard(a); break;
		case 2:sort(a); break;
		case 3:average(a); break;
		case 4:classify(a); break;
		case 5:read_file(s); break;
		case 6:print_score(s); break;
		case 7:save_file(s); break;
		case 0:printf("\n"); exit(1);
		default:printf("\ninput error (0-7 needed)!");
		}
	}
}
void save_file(struct student* s)
{
	int i;
	char fname[15];
	FILE* fp;
	printf("\ninput the name of the score file:");
	scanf("%s", fname);
	if ((fp = fopen(fname, "w")) == NULL)
	{
		printf("can not open the file.\n");
		return;
	}
	for (i = 1; i < 201; i++)
	{
		printf("inpit the number:");
		scanf("%d", &s[i].num);
		if (s[i].num == 0)
			break;
		printf("input the name:");
		scanf("%s", s[i].name);
		printf("input the score:");
		scanf("%d", &s[i].score);
		printf("\n");
		n = s[i].num;
	}
	for (i = 1; i <= n; i++)
	{
		fprintf(fp, "%d %s %d\n", (s + i)->num, (s + i)->name, (s + i)->score);
	}
	fclose(fp);
}
void read_file(struct student b[])
{
	FILE* fp;
	int i, j;
	char fname[15];
	printf("\ninput the name of the score file:");
	scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL)
	{
		printf("can not open file %s\n", fname);
		return;
	}
	n = 0;
	while (feof(fp))
	{
		fscanf(fp, "%d", &(b + n + 1)->num);
		fscanf(fp, "%s", (b + n + 1)->name);
		fscanf(fp, "%d", &(b + n + 1)->score);
		++n;
	}
}