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
//    //��signed int���ֵ��2��31�η���1;
//    float big_float = 3.4e38;
//    //��float���ֵһ����3.4E38;
//    float small_float = 10.0 / 3;
//    //��float��Чλ����6λ;
//    printf("The big int data is %d.\n", big_int + 1);
//    //�������������ֵ+1�����Խ��,�����-2147493648;
//    printf("The big float data is %f.\n", big_float * 10);
//    //��float���ֵ*10�����Խ��,�����inf;
//    printf("The big bit float data is %f.\n", small_float);
//    //��float�����Ч����;
//    printf("The max float data is %f.\n", FLT_MAX);
//    //��float�������ֵ;
//    printf("The max int data is %ld.\n", INT_MAX);
//    //��int�������ֵ;
//
//	return 0;
//}

//int main(void)//����ASCIIת��Ϊ�ַ�
//{
//	int ASCII;
//	printf("������һ��ASCII��ֵ���磬66��:");
//	scanf("%d", &ASCII);
//	printf("��ASCII��ֵ������ַ�Ϊ:%c\n", ASCII);
//	return 0;
//}

//int main(void) //ת���ַ�������
//{
//	printf("\aStarled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that!\"\n");
//	return 0;
//}

//int main(void)//������ʹ�ò�ͬ��ʽ��ӡ
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

//int main(void) //����ת��
//{
//	int age;
//
//	printf("�������������:");
//	scanf("%d", &age);
//	printf("������������ϴ����� %.1f �룡\n",age * 3.156e7);
//	return 0;
//}

//int main(void)//ˮ��λ����
//{
//	float quart;
//	printf("������ˮ�Ŀ�����:");
//	scanf("%f", &quart);
//	printf("%.2f ���ѵ�ˮ�к��е�ˮ��������Ϊ %.2e\n", quart, quart * 950 * 3.0e-23);
//	return 0;
//}

//int main(void)
//{
//	float height;
//	printf("��������ߣ�/Ӣ�磩");
//	scanf("%f", &height);
//	printf("�������ת��Ϊ����Ϊ %.2f cm\n", height * 2.54);
//	return 0;
//}

//int main() //��λת��
//{
//	float pint, ounce, cup;
//	float bigspoon, teaspoon;
//
//	printf("�����뱭����");
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