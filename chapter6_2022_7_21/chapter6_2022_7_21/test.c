#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define ROWS 6
//#define CHARS 10
#define SIZE 10
#define PAR 72


//int main(void)  //do while 实例
//{
//	const int secret_code = 13;
//	int code_entered;
//	do
//	{
//		printf("To enter the the club,\n");
//		printf("please enter the secret code number:");
//		scanf("%d", &code_entered);
//	} while (code_entered!= secret_code);
//	{
//		printf("Congratulations!\n");
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'A'; ch < 'A' + CHARS; ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//		{
//			for (ch = ('A' + row); ch < 'A' + ROWS; ch++)
//				printf("%c", ch);
//			printf("\n");
//		}
//	return 0;
//}

//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//	{
//		scanf("%d", &score[index]);
//	}
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]);
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("Sum of score = %d,average = %1.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//	return 0;
//}

double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp;

	printf("请输入底数和指数：");
	printf("\n输入q退出");

	while (scanf(" %lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("输入下一组数字或者q退出\n");
	}
	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;
	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;
}