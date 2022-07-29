#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

//int get_max(int a, int b);
//int main(void)
//{
//	int a=10, b= 20;
//	printf("max = %d", get_max(a,b));
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//
//	return z;
//}

#include <string.h>
//void swap(int* pa, int* pb);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d b = %d", a, b);
//	swap(&a, &b);
//	printf("交换后：a = %d b = %d", a, b);
//	return 0;
//}
//void swap(int *pa,int *pb)
//{
//	int z;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//	
//}

//int is_prime(int n);
//int main(void)
//{
//	int i = 2;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//		else
//			return 1;
//	}
//}

//int leapyear(int n);
//int main(void)
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leapyear(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int leapyear(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

//int binary_search(int a[], int k,int s);
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz);
//	if (ret == -1)
//	{
//		printf("error\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid]<k)
//		{
//			left = mid + 1;
//		}
//
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

//void add(int* p);
//int main(void)
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//void add(int* p)
//{
//	(*p)++;
//}

//int main(void)
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	//printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy_s(arr1,20, arr2);
//	printf("%s", arr1);
//}

//void print(unsigned int n);
//int main(void)
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	print(num);
//	return 0;
//}
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int my_strlen(char* str);
//int main(void)
//{
//	char arr[] = "arr";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//	return count;
//}

//int Fac(int n);
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}

//int Fib(int n);
//int main(void)
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}

//
//void move(char A, char C, int n)
//{
//	printf("把第%d个圆盘从%c--->%c\n", n, A, C);
//}
//
//void HanoiTower(char A, char B, char C, int n)
//{
//	if (n == 1)
//	{
//		move(A, C, n);
//	}
//	else
//	{
//		//将n-1个圆盘从A柱借助于C柱移动到B柱上
//		HanoiTower(A, C, B, n - 1);
//		//将A柱子最后一个圆盘移动到C柱上
//		move(A, C, n);
//		//将n-1个圆盘从B柱借助于A柱移动到C柱上
//		HanoiTower(B, A, C, n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("输入A柱子上的圆盘个数：");
//	scanf_s("%d", &n);
//	//将n个圆盘从A柱借助于B柱移动到C柱上
//	HanoiTower('A', 'B', 'C', n);
//	return 0;
//}
