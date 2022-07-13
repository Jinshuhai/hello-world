#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
#define PI 3.14159
#define PAGES 959
#define BLURB "Authentic imitation!"

//int main(void)
//{
//	char name[40];
//	printf("What's your name?");
//	scanf("%s", &name);
//	printf("Hello,%s.%s\n", name, PRAISE);
//	return 0;
//}

//int main(void)
//{
//	char name[40];
//	printf("What's your name?");
//	scanf("%s", name);
//	printf("Hello,%s.%s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
//	printf("The phrase of praise has %zd letters", strlen(PRAISE));
//	printf("and occupies %zd memory cells\n", sizeof(PRAISE));
//	return 0;
//}

//int main(void)
//{
//	float area, circum, radius;
//	printf("What is the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = PI * radius * radius;
//	circum = 2.0f * PI * radius;
//	printf("Your basic pizza parameters are as follows:\n");
//	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
//	return 0;
//}

//int main(void)//宽度
//{
//	printf("%d*\n",PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n",PAGES);
//	return 0;
//}

//int main(void)
//{
//	const double RENT = 3852.99;
//	printf("*%f*\n", RENT); //系统默认输出格式，小数点后保留6位
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);//总共占4个字宽，小数点后保留两位
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//	return 0;
//}

//int main(void)
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//
//	printf("**%d**% d**% d**\n", 42, 42, -42);;
//	printf("**%5d**%5.3d**%05d**%05.3d\n",6, 6, 6, 6);
//	return 0;
//}

//int main(void)
//{
//	printf("[%2s]\n", BLURB);
//	printf("[%24s]\n", BLURB);
//	printf("[%24.5s]\n", BLURB);
//	printf("[%-24.5s]\n", BLURB);
//	return 0;
//}

//int main(void)
//{
//	int bph2o = 212;
//	int rv;
//	rv = printf("%d F is water's boiling point.\n", bph2o);
//	printf("The printf() function printed %d characters.\n", rv);
//	return 0;
//}