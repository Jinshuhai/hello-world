#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ALPHABTE 26
#include <string.h>

//int main(void) //��ӡ��ĸ��
//{
//	char a[ALPHABTE];
//	int index;
//
//	for (index = 0; index < ALPHABTE; index++)
//	{
//		a[index] = 'a' + index;
//		printf("%c", a[index]);
//	}
//	return 0;
//}

//int main(void)
//{
//	const int ROWS = 5;
//	int row;
//	char ch;
//
//	for (row = 1;row<=ROWS;row++)
//	{
//		for (ch = 1; ch <= row; ch++)
//		{
//			printf("$");
//		}
//			printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	const int ROWS = 6;
//	int row;
//	int chars;
//	
//	for (row = 1; row <= ROWS; row++)
//	{
//		for (chars = 0; chars < row; chars++)
//		{
//			printf("%c", 'F'-chars);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int i, j;
//	for (i = 1,ch = 'A'; i <= 6; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", ch++);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char ch = 'A';
//	char a;
//	int i, j, ROW;
//
//	printf("������һ����ĸ��");
//	scanf("%c", &a);
//	ROW = a - ch + 1;
//
//	for (i = 1; i <= ROW; i++)
//	{
//		for (j = 1; j <=ROW - i; j++)
//			printf(" ");
//		for (j = 0; j < i; j++)
//			printf("%c", ch + j);
//		for (j = i - 2; j >= 0; j--)
//			printf("%c", ch + j);
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	int i;
//	printf("��������������ޣ�");
//	scanf("%d %d", &a, &b);
//	printf("%-10s%-10s%-10s\n", "number", "square", "cube");
//	for (i = a; i <= b; i++)
//	{
//		printf("%-10d%-10d%-10d\n", i, i * i, i * i * i);
//	}
//
//	return 0;
//}

//int main(void)
//{
//	
//	char  ch[30];
//	printf("������һ�����ʣ�");
//	scanf("%s", ch);
//
//	for (char i = strlen(ch); i >= 0; i--)
//	{
//		printf("%c", ch[i]);
//	}
//
//	return 0;
//}

//int main(void)
//{
//	float a, b;
//	float result;
//	printf("������������������");
//
//	while (scanf(" %f %f", &a, &b) == 2)
//	{
//		printf("%f\n", (a - b) / (a * b));
//	}
//	printf("done!\n");
//	return 0;
//}


//float power(float n, float p);
//
//int main(void)
//{
//	float a, b;
//	float result;
//	printf("������������������");
//	while (scanf(" %f %f", &a, &b) == 2)
//	{
//		result = power(a, b);
//		printf("�����%f\n", result);
//		printf("������һ�����ֻ���q�˳�\n");
//	}
//
//	return 0;
//}
//
//float power(float n, float p)
//{
//	return ((n - p) / (n * p));
//}

//int main(void)
//{
//	int min, max;
//	int sum, num;
//	printf("���������޺����ޣ�");
//
//	while (scanf("%d%d",&min,&max)==2&& min<max )
//	{
//		for (sum = 0, num = min; num <= max; num++)
//		{
//			sum = sum + num * num;
//		}
//		printf("����Ľ��Ϊ:%d\n",sum );
//	}
//	printf("Done!\n");
//	return 0;
//}

#define SIZE 8
int main(void)
{
	int a[SIZE];
	int i;
	printf("������˸�����:");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}