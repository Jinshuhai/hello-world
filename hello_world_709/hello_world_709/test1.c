#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()//全局变量的作用域是整个工程
//{
//	//未声明的标识符
//	//声明extern外部符号的
//	extern int y;
//	printf("y = %d\n", y);
//	return 0;
//}
 
 
//int main()//计算两个数字之和
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据
//	scanf("%d%d", &num1, &num2);
//	/*int sum 0;*///C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//全局变量
//int main()
//{
//	int num = 10;//局部变量
//	printf("%d\n", num);//局部变量优先度更高，但不建议同名
//	return 0;
//}


//int main()
//{
//	//printf("hello world\n");
//	float f = 5.5;
//		printf("%f\n", f);
//		double d = 3.14;
//			printf("%lf\n", d);
//			//定义变量的方式
//			short age = 20;//向内存申请两个字节=16比特位，用来存放20
//			float weight = 95.6;//向内存申请4个字节，存放小数
//	return 0;
//}

//#define MAX 10000
//int main()//const修饰的常变量
//{
//	//const int num = 10;//num就是常变量 - 不能被改变的属性
//	//printf("num = %d\n", num);
//	//return 0;
//
//	//3.#define定义的标识符常量
//	//int n = MAX;
//	//printf("n = %d\n", n);
//	return 0;
//}

//字符串就是一串字符
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', '\0'};//字符串的结束标志是\0 不算长度
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//
//}

//int main()//转义字符
//{
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//	//printf("c:\\test\\111"); //转义字符长度算1
//	printf("%d\n", strlen("c:\test\328\test.c")); //计算长度
//	return 0;
//}
