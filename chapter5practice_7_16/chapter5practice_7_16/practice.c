#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define MIN_PER_HOUR 60
//#define CM_PER_INCH 2.54f
//#define CM_PER_FEET 30.48f

//int main(void)
//{
//    int m, hour, min;
//
//    printf("Please enter a number for minute (<= 0 to quit): ");
//    scanf("%d", &m);
//    while (m>0)
//    {
//        hour = m / MIN_PER_HOUR;
//        min = m % MIN_PER_HOUR;
//        printf("%d minutes = %d hours and %d minutes.\n", m, hour, min);
//        printf("You can enter again (<= 0 to quit): ");
//        scanf("%d", &m);
//    }
//    printf("Done.\n");
//
//    return 0;
//}

//int main(void)
//{
//	int a;
//	int b = 0;
//	printf("������һ������:");
//	scanf("%d", &a);
//	while (b <11)
//	{
//			printf("%d\n",a);
//			a++;
//			b++;
//	}
//	return 0;
//}

//int main(void)
//{
//	int d, week, day;
//	printf("����������:");
//	scanf("%d", &d);
//	while (d > 0)
//	{
//		week = d / 7;
//		day = d % 7;
//		printf("%d����%d��%d��\n", d, week, day);
//		printf("����������:");
//		scanf("%d", &d);
//	}
//
//	printf("������\n");
//	return 0;
//}

//int main(void)
//{
//	int feet;
//	float cm, inch;
//
//	printf("��������ߣ����ף���");
//	scanf("%f", &cm);
//		while (cm > 0)
//		{
//			feet = (int)(cm / CM_PER_FEET);
//			inch = (cm - CM_PER_FEET * feet) / CM_PER_INCH;
//			printf("%.1fcm = %d feet,%.1f inched\n", cm, feet, inch);
//			printf("��������ߣ����ף���");
//			scanf("%f", &cm);
//	}
//		printf("done!\n");
//	return 0;
//}

//int main(void)
//{
//    int n, sum, count;
//    sum = 0;
//
//    printf("Enter the number of days you work: ");
//    scanf("%d", &count);
//    n = count;
//    while (count > 0)
//    {
//        sum += count;
//        count--;
//    }
//    printf("You earned $%d in %d days.\n", sum, n);
//
//    return 0;
//}

//int main(void)
//{
//    int n, sum, count;
//    sum = 0;
//
//    printf("Enter the number of days you work: ");
//    scanf("%d", &count);
//    n = count;
//    while (count > 0)
//    {
//        sum += count * count;
//        count--;
//    }
//    printf("You earned $%d in %d days.\n", sum, n);
//
//    return 0;
//}

//void cube(double n);
//int main(void)
//{
//    double a;
//    printf("������һ��doubleֵ:");
//    scanf("%lf", &a);
//    cube(a);
//    return 0;
//}
//
//void cube(double n)
//{
//    printf("%lf cube = %lf", n, n*n*n);
//}

//int main(void)
//{
//	int a, b;
//	printf("�����������");
//	scanf("%d", &a);
//	printf("�����뱻������");
//	scanf("%d", &b);
//	while (b > 0)
//	{
//
//		printf("%d %% %d is %d\n", b, a, b % a);
//		printf("�����뱻������");
//		scanf("%d", &b);
//
//	}
//	printf("done!\n");
//	
//	return 0;
//}

void Temperatures(double f_t);
int main(void)
{
	double temp;
	printf("������һ�������¶ȣ�");
	while (scanf("%lf", &temp) == 1)
	{
		Temperatures(temp);
		printf("������ظ���q�˳�����");
	}
	return 0;
}

void Temperatures(double f_t)
{
	const double f_val = 32.0;
	const double k_val = 273.16;

	double t = 5.0 / 9.0 * (f_t - f_val);
	double k_t = t + k_val;
	printf("Centigrade temperature: %.2lf��C\n", t);
	printf("Fahrenheit temperature: %.2lf��C\n", f_t);
	printf("Kelvin temperature: %.2lf��C\n", k_t);
}