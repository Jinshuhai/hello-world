#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#define COVERAGE 350
//int main(void)
//{
//	int sq_feet;
//	int cans;
//	printf("������Ҫ����Ĵ�С��");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);
//		printf("����Ҫ%d %s Ͱ���ᡣ\n", cans, cans == 1 ? "can": "cans");
//		printf("������һ��ֵ��q�˳�����");
//	}
//	return 0;
//
//}

//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.f;
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//	printf("�����һ��������q�˳�����");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score<MIN || score >MAX)
//		{
//			printf("%0.1f��һ�������ķ����������³��ԣ�", score);
//			continue;
//		}
//		printf("����%0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//			printf("������һ������(q�˳�����");
//	}
//	if (n > 0)
//	{
//		printf("%d�ֵܷ�ƽ����Ϊ %0.1f��\n", n, total / n);
//		printf("Low = %0.1f,high = %01.f\n", min, max);
//	}
//	else
//		printf("û��ֵ����.\n");
//	return 0;
//}

//int main(void)
//{
//	float length, width;
//	printf("���볤�ȣ�\n");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("���� = %0.2f.\n", length);
//		printf("�����ȣ�\n");
//		if(scanf("%f",&width)!=1)
//			break;
//			printf("��� = %0.2f:\n",width);
//			printf("��� = %0.2f:\n",length * width);
//	}
//	printf("Done!\n");
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	printf("��������ĸ��\n");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//			continue;
//		if(islower(ch))
//			switch (ch)
//			{
//			case'a':
//					printf("Asia\n");
//					break;
//			case'b':
//					printf("Malay\n");
//					break;
//			case 'c':
//					printf("coati\n");
//					break;
//			case'd':
//				printf("desman\n");
//				break;
//			case'e':
//				printf("echidna\n");
//
//			}
//	}
//	return 0;
//}