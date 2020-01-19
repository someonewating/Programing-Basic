#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("input the score");
	scanf("%d", &score);
	if (score > 100);
	else if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 60)
		grade = 'C';
	else if (score >= 0)
		grade = 'D';
	if (score > 100 || score < 0)
		printf("input error.(must be 0-100)\n");
	else printf("score=%d,grade=%c\n", score, grade);
}