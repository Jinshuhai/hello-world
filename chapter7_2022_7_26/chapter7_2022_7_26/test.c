#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#define COVERAGE 350
//int main(void)
//{
//	int sq_feet;
//	int cans;
//	printf("输入需要油漆的大小：");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);
//		printf("你需要%d %s 桶油漆。\n", cans, cans == 1 ? "can": "cans");
//		printf("输入下一个值（q退出）：");
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
//	printf("输入第一个分数（q退出）：");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score<MIN || score >MAX)
//		{
//			printf("%0.1f是一个独立的分数，请重新尝试：", score);
//			continue;
//		}
//		printf("接受%0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//			printf("输入下一个分数(q退出）：");
//	}
//	if (n > 0)
//	{
//		printf("%d总分的平均分为 %0.1f。\n", n, total / n);
//		printf("Low = %0.1f,high = %01.f\n", min, max);
//	}
//	else
//		printf("没有值输入.\n");
//	return 0;
//}

//int main(void)
//{
//	float length, width;
//	printf("输入长度：\n");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("长度 = %0.2f.\n", length);
//		printf("输入宽度：\n");
//		if(scanf("%f",&width)!=1)
//			break;
//			printf("宽度 = %0.2f:\n",width);
//			printf("面积 = %0.2f:\n",length * width);
//	}
//	printf("Done!\n");
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	printf("请输入字母：\n");
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