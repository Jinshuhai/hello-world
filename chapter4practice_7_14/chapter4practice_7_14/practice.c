#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <float.h>

#define GALLON_TO_LITRE 3.785f
#define MILE_TO_KM 1.609f

//int main(void)//��ȡ����
//{
//    char fname[20], lname[20];
//
//    printf("Please enter your first name: ");
//    scanf("%s", fname);
//    printf("Please enter your last name: ");
//    scanf("%s", lname);
//    printf("Hello! %s, %s.\n", fname, lname);
//	return 0;
//}

//int main(void)
//{
//	int len = 0;
//	char name[20];
//
//	printf("Please enter your name: ");
//    scanf("%s", name);
// 
//
//	printf("\"%s\"\n", name);
//	printf("\"%20s\"\n", name);
//	printf("\"%-20s\"\n", name);
//	printf("%*s\n", len + 3,name);
//	return 0;
//}

//int main(void)
//{
//	float a;
//	scanf("%f", &a);
//	printf("����%.1f��%.1e\n", a, a);
//	printf("����%.3f��%.3e\n", a, a);
//
//	return 0;
//}

//int main(void)
//{
//	float height;
//	char name[40];
//
//	printf("��������ߣ���λ�����ף�������:");
//	scanf("%f %s", &height, name);
//	printf("%s,��������%.3f", name, height / 100);
//	return 0;
//}

//int main(void)
//{
//	float speed;
//	float file;
//
//	printf("�����������ٶ�:");
//	scanf("%f", &speed);
//	printf("�������ļ���С��");
//	scanf("%f", &file);
//	printf("��%.2f���ٶ�����%.2f��С���ļ�\n��Ҫ%.2f���ʱ��\n", speed, file, file * 8 / speed);
//	return 0;
//}

//int main(void)
//{
//	char fname[20];
//	char lname[20];
//
//	printf("����������");
//	scanf("%s", fname);
//	printf("�������գ�");
//	scanf("%s", lname);
//	printf("%s %s\n", fname, lname);
//	printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
//	printf("%s %s\n", fname, lname);
//	printf("%-*d %-*d", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
//	return 0;
//}
//
//int main(void)
//{
//	double a = 1.0 / 3.0;
//	float b = 1.0 / 3.0;
//
//	printf("%.6lf %.6f\n", a, b);
//	printf("%.12lf %.12f\n", a, b);
//	printf("%.16lf %16f\n", a, b);
//	printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
//
//	return 0;
//}

//int main(void)
//{
//	float gallon, mile;
//	printf("���������е���̺����ĵ���������\n");
//	scanf("%f %f", &mile, &gallon);
//	printf("1.ÿ����������ʻ��Ӣ������2.ÿ100������������\n");
//	printf("1.In USA: %.1f\n", gallon / mile);
//	printf("2.In EU: %.1f\n", GALLON_TO_LITRE * gallon / MILE_TO_KM * mile);
//	return 0;
//}