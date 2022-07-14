#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <float.h>

#define GALLON_TO_LITRE 3.785f
#define MILE_TO_KM 1.609f

//int main(void)//读取姓名
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
//	printf("输入%.1f或%.1e\n", a, a);
//	printf("输入%.3f或%.3e\n", a, a);
//
//	return 0;
//}

//int main(void)
//{
//	float height;
//	char name[40];
//
//	printf("请输入身高（单位：厘米）和姓名:");
//	scanf("%f %s", &height, name);
//	printf("%s,你的身高是%.3f", name, height / 100);
//	return 0;
//}

//int main(void)
//{
//	float speed;
//	float file;
//
//	printf("请输入下载速度:");
//	scanf("%f", &speed);
//	printf("请输入文件大小：");
//	scanf("%f", &file);
//	printf("以%.2f的速度下载%.2f大小的文件\n需要%.2f秒的时间\n", speed, file, file * 8 / speed);
//	return 0;
//}

//int main(void)
//{
//	char fname[20];
//	char lname[20];
//
//	printf("请输入名：");
//	scanf("%s", fname);
//	printf("请输入姓：");
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
//	printf("请输入旅行的里程和消耗的汽油量：\n");
//	scanf("%f %f", &mile, &gallon);
//	printf("1.每加仑汽油行驶的英里数，2.每100公里消耗升数\n");
//	printf("1.In USA: %.1f\n", gallon / mile);
//	printf("2.In EU: %.1f\n", GALLON_TO_LITRE * gallon / MILE_TO_KM * mile);
//	return 0;
//}