#define _CRT_SECURE_NO_WARNINGS 1
#define FLT_MAX 3.402823466e+38F
#define INT_MAX 2147483647

#include <stdio.h>

//int main(void)
//{
//	float salary;
//	printf("\aEnter your desired monthly salary:");
//	printf("$_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
//	printf("\rGee!\n");
//	return 0;
//}

//int main(void)
//{
//    int big_int = 2147483647;
//    //↑signed int最大值是2的31次方减1;
//    float big_float = 3.4e38;
//    //↑float最大值一般是3.4E38;
//    float small_float = 10.0 / 3;
//    //↑float有效位数是6位;
//    printf("The big int data is %d.\n", big_int + 1);
//    //↑整型数据最大值+1会造成越界,结果是-2147493648;
//    printf("The big float data is %f.\n", big_float * 10);
//    //↑float最大值*10会造成越界,结果是inf;
//    printf("The big bit float data is %f.\n", small_float);
//    //↑float最大有效精度;
//    printf("The max float data is %f.\n", FLT_MAX);
//    //↑float类型最大值;
//    printf("The max int data is %ld.\n", INT_MAX);
//    //↑int类型最大值;
//
//	return 0;
//}

//int main(void)//输入ASCII转换为字符
//{
//	int ASCII;
//	printf("请输入一个ASCII码值（如，66）:");
//	scanf("%d", &ASCII);
//	printf("此ASCII码值代表的字符为:%c\n", ASCII);
//	return 0;
//}

//int main(void) //转义字符的运用
//{
//	printf("\aStarled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that!\"\n");
//	return 0;
//}

//int main(void)//浮点数使用不同形式打印
//{
//	float a;
//	
//	printf("Enter a floating-point vlaue: ");
//	scanf("%f",&a);
//	printf("fixed-point notation: %f\n",a);
//	printf("expontial natation: %e\n", a);
//	printf("p notation: %a\n", a);
//	return 0;
//}

//int main(void) //年龄转换
//{
//	int age;
//
//	printf("请输入你的年龄:");
//	scanf("%d", &age);
//	printf("你在这个世界上存在了 %.1f 秒！\n",age * 3.156e7);
//	return 0;
//}

//int main(void)//水单位换算
//{
//	float quart;
//	printf("请输入水的夸脱数:");
//	scanf("%f", &quart);
//	printf("%.2f 夸脱的水中含有的水分子数量为 %.2e\n", quart, quart * 950 * 3.0e-23);
//	return 0;
//}

//int main(void)
//{
//	float height;
//	printf("请输入身高（/英寸）");
//	scanf("%f", &height);
//	printf("您的身高转换为厘米为 %.2f cm\n", height * 2.54);
//	return 0;
//}

//int main() //单位转换
//{
//	float pint, ounce, cup;
//	float bigspoon, teaspoon;
//
//	printf("请输入杯数：");
//	scanf("%f", &cup);
//
//	pint = cup * 2;
//	ounce = cup / 8;
//	bigspoon = ounce * 2;
//	teaspoon = bigspoon / 3;
//
//	printf("Here are some ways to show %g cups\n", cup);
//	printf("Pint: %g\n", pint);
//	printf("Ounce: %g\n", ounce);
//	printf("Bigspoon: %g\n", bigspoon);
//	printf("Teaspoon: %g\n", teaspoon);
//
//	return 0;
//}