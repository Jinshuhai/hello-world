#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main(void)
//{
//	int ch;
//	FILE* fp;
//	char fname[50];
//	printf("输入文件的名字：");
//	scanf("%s", fname);
//	fp = fopen(fname, "r");
//	if (fp == NULL)
//	{
//		printf("打开失败。\n");
//		exit(1);
//	}
//
//	while ((ch = getc(fp)) != EOF)
//	{
//		putchar(ch);
//	}
//
//	fclose(fp);
//	return 0;
//}

//void display(char ch, int lines, int width);
//int main(void)
//{
//	int ch;
//	int rows, cols;
//	printf("输入一个字符和两个数字：");
//	while ((ch = getchar()) != '\n');
//	{
//		scanf("%d %d", &rows, &cols);
//		display(ch, rows, cols);
//
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//		printf("输入其他字符和数字：\n");
//		printf("回车退出");
//	}
//	printf("bye!");
//	return 0;
//}
//
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');
//	}
//	return;
//}

#include <stdbool.h>

long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
double sum_sq(long a, long b);

int main(void)
{
	const MIN = -10000000L;
	const MAX = 10000000L;
	long start;
	long stop;
	double answer;

	printf("输入:");
	start = get_long();
	printf("输入：");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
		{
			printf("请重试！");
		}
		else
		{
			answer = sum_sq(start, stop);
			printf(" %ld 到 %ld 的平方和为 %ld", start, stop, answer);
		}
		printf("输入 退出：\n");
		printf("输入:");
		start = get_long();
		printf("输入：");
		stop = get_long();
	}
	printf("DONE\n");
	return 0;
}

long get_long(void)
{
	long input;
	char ch;
	
	while(scanf("%ld",&input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}
		printf("不是一个数字，请输入数字:");
	}
	return input;
}

double sum_sq(long a, long b)
{
	double total = 0;
	long i;
	for (i = a; i <= b; i++)
		total += (double)i * (double)i;

	return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
	bool not_good = false;
	if (begin > end)
	{
		printf("错误");
		not_good = true;
	}
	if (begin < low || end > high)
	{
		printf("错误");
		not_good = true;
	}
	if (begin > high || end < low)
	{
		printf("错误");
		not_good = true;
	}
	return not_good;
}