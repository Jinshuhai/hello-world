#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main(void)
//{
//    double sum1 = 0, sum2 = 0;
//    int count, items, sign;
//
//    printf("Enter the items: ");
//    while ((scanf("%d", &items)) == 1)
//    {
//        for (count = 1, sign = 1; count <= items; count++, sign *= -1)
//        {
//            sum1 += 1.0 / count;
//            sum2 += 1.0 * sign / count;
//        }															   //�ֱ���������еĺ�
//        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = %f\n", sum1);
//        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = %f\n", sum2);
//    }
//    printf("done!");
//
//
//    return 0;
//}
//
//#define SIZE 8
//int main(void)
//{
//	int a[SIZE];
//	int i,b;
//
//	for (i = 0,b = 1;i < SIZE;i++)
//	{
//		b = b * 2;
//		a[i] = b;
//	}
//
//	i = 0;
//	do
//		printf("%d ", a[i++]);
//	while (i < SIZE);
//			printf("\n");
//	return 0;
//}

//#define SIZE 8
//int main(void)
//{
//	double a[SIZE];
//	double b[SIZE];
//	int index;
//
//	for (index = 0;index < SIZE;index++)
//	{
//		printf("�������%d��ֵ��",index + 1);
//		scanf("%lf", &a[index]);
//	}
//	b[0] = a[0];
//	for (index = 1;index < SIZE;index++)
//	{
//		b[index] = b[index - 1] + a[index];
//	}
//
//	printf("��һ������Ϊ��");
//	for (index = 0;index < SIZE;index++)
//	{
//		printf("%6.2lf", a[index]);
//	}
//
//	printf("\n�ڶ�������Ϊ��");
//	for (index = 0;index < SIZE;index++)
//	{
//		printf("%6.2lf", b[index]);
//	}
//	return 0;
//
//}

//#define SIZE 255
//int main(void)
//{
//	int index;
//	char ch[SIZE];
//	printf("������");
//	for (index = 0, scanf("%c", &ch[0]);ch[index] != '\n';)
//	{
//		index++;
//		scanf("%c", &ch[index]);
//	}
//
//	for (index += 1; index < SIZE; index++)
//		ch[index] = '\0';						//������ʣ��ռ䲹��Ϊ'\0'
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);				//�����������
//	printf("\n");
//
//	return 0;
//}

//#define RATE_DAPHNE 0.1
//#define RATE_DEIRDRE 0.05	
//#define MONEY 100
//int main(void)
//{
//	int index;
//	float Daphne = MONEY,Deirdre = MONEY;
//
//
//	for (index = 1; Daphne >= Deirdre;index++)
//	{
//		Daphne += MONEY * RATE_DAPHNE;
//		Deirdre += Deirdre * RATE_DEIRDRE;
//	}
//
//	printf("�� %d ��֮��De��Ͷ�ʶ�ᳬ��Da,De = %.2f,Da = %.2f:\n", index, Deirdre, Daphne);
//	return 0;
//}

//#define MONEY 1000000
//#define RATE 0.08
//int main(void)
//{
//	int year;
//	double money;
//
//	for (year = 1, money = MONEY; money > 0; year++)
//		money += money * RATE - 100000;
//
//	printf("After %d years, Chuckie will draw all money from his account.\n", year);
//	return 0;
//}
//
#define DUNBAR 150
#define FRIENDS 5
int main(void)
{
	int week;
	int friends;
	
	for (week = 1,friends = FRIENDS;friends < DUNBAR;week++)
	{
		friends = (friends - week) * 2;
		printf("�� %d �ܺ����������� %d ��\n", week, friends);
	}
	return 0;
}

