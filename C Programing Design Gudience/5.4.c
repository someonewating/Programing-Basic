#include<stdio.h>
int main()
{
	int i;
	char ch;
	void dummy();
	while (1)
	{
		printf("\n");
		printf("\t**scores managing system**\n");
		printf("\t*1.read*\n");
		printf("\t*2.sort*\n");
		printf("\t*3.average*\n");
		printf("\t*4.classfy*\n");
		printf("\t*0.exit\n");
		printf("\t************\n");
		printf("\tinput the selection:");
		ch = getchar();
		i = ch - '0';
		switch (i)
		{
		case 1:dummy(); break;
		case 2:dummy(); break;
		case 3:dummy(); break;
		case 4:dummy(); break;
		case 0:printf("welcome bye\n"); exit(1);
		default:printf("\ninput error (0-4 needed)!");
		}
	}
}
void dummy()
{

}