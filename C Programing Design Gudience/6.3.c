#include<stdio.h>
#include<conio.h>
int n = 0;
void read_keyboard(int a[]);
/*main*/
main()
{
	int i, a[201];
	char ch;
	void dummmy();
	for (i = 1; i < 201; i++)
		a[i] = 0;
	while (1)
	{
		printf("\n");
		printf("\t**scores managing systerm**");
		printf("\t 1.read\n");
		printf("\t 2.sort\n");
		printf("\t 3.average\n");
		printf("\t 4.classfy\n");
		printf("\t 0.exit\n");
		printf("\t****\n");
		printf("\tinput the selection:");
		ch = getche();
		i = ch - '0';
		switch (i)
		{
		case 1:read_keyboard(a); break;
		case 2:dummy(); break;
		case 3:dummy(); break;
		case 4:dummy(); break;
		case 0:printf("welcome,bye.\n"); exit(1);
		default:printf("\ninput error(0-4 needed)");
		}
	}
}
/*read*/
void read_keyboard(int a[])
{
	int i, k;
	printf("\ninput the number and scores of the students:");
	printf("\n(the number from 1 to 200(0=end))\n");
	for (i = 1; i < 201; i++)
	{
		printf("input the number:");
		scanf("%d", &k);
		if (k == 0) break;
		scanf("%d", &a[k]);
		printf("\n");
		n = k;
	}
	printf("what you read are:\n");
	printf("number score\n");
	for (i = 0; i <= n; i++)
		printf("%d %d\n", i, a[i]);
}
void dummy
{

}