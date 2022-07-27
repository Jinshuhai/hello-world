#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main(void)
//{
//	int ch;
//	FILE* fp;
//	char fname[50];
//	printf("�����ļ������֣�");
//	scanf("%s", fname);
//	fp = fopen(fname, "r");
//	if (fp == NULL)
//	{
//		printf("��ʧ�ܡ�\n");
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
//	printf("����һ���ַ����������֣�");
//	while ((ch = getchar()) != '\n');
//	{
//		scanf("%d %d", &rows, &cols);
//		display(ch, rows, cols);
//
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//		printf("���������ַ������֣�\n");
//		printf("�س��˳�");
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

	printf("����:");
	start = get_long();
	printf("���룺");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
		{
			printf("�����ԣ�");
		}
		else
		{
			answer = sum_sq(start, stop);
			printf(" %ld �� %ld ��ƽ����Ϊ %ld", start, stop, answer);
		}
		printf("���� �˳���\n");
		printf("����:");
		start = get_long();
		printf("���룺");
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
		printf("����һ�����֣�����������:");
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
		printf("����");
		not_good = true;
	}
	if (begin < low || end > high)
	{
		printf("����");
		not_good = true;
	}
	if (begin > high || end < low)
	{
		printf("����");
		not_good = true;
	}
	return not_good;
}