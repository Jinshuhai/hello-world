#include <stdio.h>

//void print_table(int n);
//int main(void)
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print_table(n);
//	return 0;
//}
//
//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d | ", i, j, i * j);
//		}
//		printf("\n");
//		
//	}
//}
//void reverse_string(char* str);
//int my_strlen(char* str);
//int main(void)
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse_string(char* str);
//int my_strlen(char* str);
//int main(void)
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main(void)
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d", sum);
//	return 0;
//
//}
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
double Pow(int x, int y);
int main(void)
{
	int n = 0;
	int k = 0;
	scanf_s("%d %d", &n,&k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}
double Pow(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}
	else if (y > 0)
		return x * Pow(x, y - 1);
	else
		return 1.0/ (x * Pow(x, -y - 1));
}