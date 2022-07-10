#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(void)
//{
//	float weight;
//	float value;
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//	
//	scanf("%f", &weight);
//
//	value = 1700.0 * weight * 14.5833;
//
//	printf("Your weight in platinum is worth $%.2f.\n", value);//.2用于精确控制输出
//	printf("You are easily worth that! If platinum prices drop,\n");
//	printf("eat ,more to maintain your value.\n");
//	return 0;
//}

//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//
//	printf("right:");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("wrong:");
//	printf("%d minus %d is %d\n", ten);//遗漏两个数，后两个值为随机垃圾值
//	return 0;
//}

//int main(void)
//{
//	int num = 100;
//
//	printf("dec = %d; octal = %o; hex = %x\n", num, num, num);//%d十进制,%o八进制,%x十六进制
//
//	printf("dec = %d; octal = %#o; hex = %#x\n", num, num, num);//可读性 使用# 输出不同的进制
//	return 0;
//}

//int main()
//{
//	int i = 4143414134314;
//	unsigned int j = 4351421421;
//
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	return 0;
//}

//int main(void)
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un = %u and not %d\n", un, un);
//	printf("end = %hd and %d\n", end, end);
//	printf("big = %ld and not %hd\n", big, big);
//	printf("verybig = %lld and not %ld\n", verybig, verybig);
//	return 0;
//}

int main()
{
	//char ch = 65;
	char ch = 'a';

	printf("ch = %c\n", ch);
	return 0;
}