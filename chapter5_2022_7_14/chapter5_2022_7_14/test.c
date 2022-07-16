#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ADJUST 7.31

//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe, foot ;
//	
//	printf("Shoe size (men's) foot length\n");
//	shoe = 3.0;
//
//	while(shoe < 18.5)//两个数比较
//	{
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//
//		shoe = shoe + 1.0;
//	}
//
//	printf("If the shoe fits, wear it.\n");
//	
//	return 0;
//}

//int main(void)
//{
//	int num = 1;
//	int total = 0;
//
//	while (num <= 100)
//	{
//		total = total + num;
//
//		num = num + 1;
//
//	}
//
//	printf("%d\n", total);
//	return 0;
//}

//int main(void)
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//
//	printf("a  a_post   b  pre_b\n");
//	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
//	return 0;
//}

//void pound(int n);
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6.0;
//
//	pound(times);
//	pound(ch);
//	pound(f);
//	return 0;
//}
//
//void pound(int n)
//{
//	while (n-- > 0)
//	{
//		printf("#");
//	}
//	printf("\n");
//}

const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;
	printf("This\n");
	printf("to\n");
	printf("speed\n");
	printf("enter\n");
	scanf("%lf", &distk);
	printf("next\n");
	printf("begin\n");
	scanf("%d", &min);
	printf("now\n");
	scanf("%d", &sec);
	time = S_PER_M * min + sec;
	distm = M_PER_K * distk;
	rate = distm / time * S_PER_H;
	mtime = (double)time / distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;
	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",distk,distm,min,sec);
	printf("That pace corresponds to running a mile in %d min,", mmin);
	printf("%d sec.\nYour average speed was %1.2f mph\n", msec, rate);
	return 0;
}