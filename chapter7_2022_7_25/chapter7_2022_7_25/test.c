#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
//int main(void)
//{
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//	printf("������ÿ���������£�");
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("�ܹ� %d �죬%.1f%% ������ȡ�\n", all_days, 100 * (float)cold_days / all_days);
//	else
//		printf("û������.\n");
//	return 0;
//}

//#define SPACE ' '
//int main(void)
//{
//	char ch;
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//		ch = getchar();
//	}
//	putchar(ch);
//	return 0;
//}


//bool isPrime(int num);
//int main(void)
//{
//	unsigned long num;
//
//	printf("������һ�����֣�");
//	printf("q�˳�.\n");
//	while (scanf("%lu", &num) == 1)
//	{
//		
//		if (isPrime(num))
//		{
//			printf("%lu������.\n", num);
//		}
//		printf("������һ�����֣�");
//		printf("q�˳�.\n");
//	}
//	printf("�ټ���\n");
//	return 0;
//}
//
//bool isPrime(int num)
//{
//	unsigned long div;
//
//	bool isPrime;
//	for (div = 2, isPrime = true; (div * div) <= num; div++)
//	{
//		if (num % div == 0)
//		{
//			if ((div * div) != num)
//				printf("%lu��%lu��%lu����\n", num, div, num / div);
//			else
//				printf("%lu�Ǳ�%lu����\n", num, div);
//			isPrime = false;
//		}
//	}
//	return isPrime;
//}

//#define PERIOD '.'
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '"' && '\'')
//		{
//			charcount++;
//		}
//	}
//	printf("������ %d ���ַ�.\n", charcount);
//	return 0;
//}


#define STOP '|'
int main(void)
{
	char c;
	char prev;
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	bool inword = false;
	printf("������һ�����֣�\n");
	prev = '\n';
	while ((c = getchar()) != STOP)
	{
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (!isspace(c) && !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(c) && inword)
			inword = false;
		prev = c;
	}
	if (prev != '\n')
	{
		p_lines = 1;
		printf("characters = %ld,words = %d,lines = %d,", n_chars, n_words, n_lines);
		printf("partial lines = %d\n", p_lines);
	}
	return 0;
}