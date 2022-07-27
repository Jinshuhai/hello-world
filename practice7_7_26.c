#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(void)
//{
//	char ch;
//	int spaceNum = 0;
//	int newlineNum = 0;
//	int otherNum = 0;
//
//	printf("输入一些文字（#退出）：\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//		{
//			spaceNum++;
//		}
//		if (ch == '\n')
//		{
//			newlineNum++;
//		}
//		else
//			otherNum++;
//	}
//	printf("空格：%d,换行符：%d,其他：%d\n", spaceNum, newlineNum, otherNum);
//
//	return 0;
//}

//#define CHARS_PER_LINE 8
//int main(void)
//{
//    char ch;
//    int n_chars = 1;			//字符数
//
//    printf("Enter some characters(# to quit):\n");
//    while ((ch = getchar()) != '#')
//    {
//        printf("%3c(%3d) ", ch, ch);
//        if (n_chars++ % CHARS_PER_LINE == 0)
//            printf("\n");
//    }
//    printf("\n");
//
//    return 0;
//}

//int main(void)
//{
//    int num;
//    int n_even = 0, n_odd = 0;
//    int sum_even = 0,sum_odd = 0;
//    printf("请输入一些整数(0退出):\n");
//        while (scanf("%d", &num) != 0)
//        {
//            if (num % 2 == 0)
//            {
//                n_even++;
//                sum_even += num;
//            }
//            else
//            {
//                n_odd++;
//                sum_odd += num;
//            }
//
//
//        }
//        printf("The number of even numbers is %d, "
//            "and the everage of even numbers is %.2f\n",
//            n_even, (n_even == 0) ? 0 : (float)sum_even / n_even);
//        printf("The number of odd numbers is %d, "
//            "and the everrage of odd numers is %.2f\n",
//            n_odd, (n_odd == 0) ? 0 : (float)sum_odd / n_odd);
//
//    return 0;
//}

//int main(void)
//{
//	char ch;
//	int replaceNum = 0;
//
//	printf("输入一些文本(#退出)：\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '.')
//		{
//			ch = '!';
//			replaceNum++;
//		}
//		else if (ch == '!')
//		{
//			printf("!");
//			replaceNum++;
//		}
//		printf("%c", ch);
//	}
//	printf("\n%d个字符被替换.\n", replaceNum);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int replaceNum = 0;
//
//	printf("输入一些文本(#退出)：\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case '.':
//			ch = '!';
//			replaceNum++;
//			break;
//		case '!':
//			printf("!");
//			replaceNum++;
//			break;
//		default:
//			break;
//		}
//		printf("%c", ch);
//	}
//	printf("\n%d个字符被替换.\n", replaceNum);
//	return 0;
//}

//int main(void)
//{
//    char ch;
//    char last_ch = 0;		 //前一个字符
//    int count = 0;
//
//    printf("Enter some texts(# to quit):\n");
//    while ((ch = getchar()) != '#')
//    {
//        if ((ch == 'i') && (last_ch == 'e'))
//            count++;
//        last_ch = ch;		//出现ei时，计数+1
//    }
//    printf("\"ei\" appeared %d times.\n", count);
//
//    return 0;
//}

//#define RATE_UNDER300 0.15
//#define RATE_UNDER450 0.2
//#define RATE_OTHER 0.25
//#define TIME 40
//#define BASE1 8.75
//#define BASE2 9.33
//#define BASE3 10.00
//#define BASE4 11.20
//int main(void)
//{
//	double wage = 0;
//	int hour = 0;
//	double rate = 0;
//	int count,num;
//	double basic = 0;
//	const int LENGTH = 65;	//*的长度
//
//	printpart: for (count = 0; count < LENGTH; count++)
//	printf("*");
//	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
//	printf("%-36s%s", "1) $8.75/hr", "2) $9.33/hr\n");
//	printf("%-36s%s", "3) $10.00/hr", "4) $11.20/hr\n");
//	printf("%s\n", "5) quit");
//	for (count = 0; count < LENGTH; count++)
//	printf("*");
//printf("\n");
//
//while (scanf("%d", &num) == 1)
//{
//	switch (num)
//	{
//	case 1:basic = BASE1;
//		break;
//	case 2:basic = BASE2;
//		break;
//	case 3:basic = BASE3;
//		break;
//	case 4:basic = BASE4;
//		break;
//	default:printf("请输入正确选项！\n");
//		break;
//	}
//
//	printf("请输入你的工作小时数（q退出）：");
//	while (scanf("%d", &hour) == 1)
//	{
//		if (hour <= TIME)
//		{
//			wage = basic * hour;
//		}
//		else
//		{
//			wage = basic * TIME + (hour - TIME) * 1.5 * basic;
//		}
//		if (wage <= 300)
//		{
//			rate = wage * RATE_UNDER300;
//		}
//		else if (wage <= 450)
//		{
//			rate = 300 * RATE_UNDER300 + (wage - 300) * RATE_UNDER450;
//		}
//		else
//		{
//			rate = 300 * RATE_UNDER300 + 150 * RATE_UNDER450 +
//				(wage - 450) * RATE_OTHER;
//		}
//		printf("你的总收入为：%.2f ，税金为：%.2f ，净收入为：%.2f .\n", wage, rate, wage - rate);
//		printf("\n你的下一个选择是:\n");
//	}
//}
//	printf("结束\n");
//	return 0;
//}

//int main(void)
//{
//	int num = 0;
//	int i,n;
//	int prime;
//	printf("请输入一个正整数:");
//	while (scanf("%d", &num) > 0)
//	{
//
//		if (num == 1)
//		{
//			printf("1 不是素数!\n");
//			printf("你可以重新输入 (<= 0 to quit): ");
//			continue;
//		}
//		printf("在此数以下的素数为:\n");
//		for (i = 2; i <= num; i++)
//		{
//			prime = 1;
//			for (n = 2; n * n <= i; n++)
//			{
//				if (i % n == 0)
//				{
//					prime = 0;
//					break;
//				}
//				
//			}
//			if (prime)
//			{
//			printf("%-3d", i);
//			}
//		}
//		printf("\n你可以继续输入(<= 0 to quit)：\n");
//
//	}
//	printf("done!\n");
//	return 0;
//}

//#define BASE1 17850
//#define BASE2 23900
//#define BASE3 29750
//#define BASE4 14875
//#define RATE1 0.15
//#define RATE2 0.28
//int main(void)
//{
//	int num, i,basic;
//	float wage, rate;
//	printf("请输入你的类别：\n");
//	printf("%-20s%s", "类别", "税金\n");
//	printf("%-20s%s", "1.单身", "17850美元按15%计，超出部分按28%计\n");
//	printf("%-20s%s", "2.户主", "23900美元按15%计，超出部分按28%计\n");
//	printf("%-20s%s", "3.已婚，共有", "29750美元按15%计，超出部分按28%计\n");
//	printf("%-20s%s", "4.已婚，离异", "14875美元按15%计，超出部分按28%计\n\n");
//
//	printf("请输入你的种类：");
//	while (scanf("%d", &num) == 1)
//	{
//		switch (num)
//		{
//		case 1:basic = BASE1;
//			break;
//		case 2:basic = BASE2;
//			break;
//		case 3:basic = BASE3;
//			break;
//		case 4:basic = BASE4;
//			break;
//		default:continue;
//		}
//
//		printf("请输入你的工资（q退出）：");
//		if (scanf("%f", &wage) == 1)
//		{
//			if (wage <= basic)
//			{
//				rate = wage * RATE1;
//			}
//			else
//			{
//				rate = basic * RATE1 + (wage - basic) * RATE2;
//			}
//		printf("你的税金为：%.2f.\n",rate);
//		}
//	printf("\n你的下一个选择是:\n");
//	}
//	printf("done!");
//	return 0;
//}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    const double price_artichokes = 2.05;
    const double price_beets = 1.15;
    const double price_carrots = 1.09;
    const double DISCOUNT_RATE = 0.05;
    const double under5 = 6.50;
    const double under20 = 14.00;
    const double base20 = 14.00;
    const double extralb = 0.50;

    int ch;
    double lb_artichokes = 0;
    double lb_beets = 0;
    double lb_carrots = 0;
    double lb_temp;
    double lb_total;

    double cost_artichokes;
    double cost_beets;
    double cost_carrots;
    double cost_total;
    double final_total;
    double discount;
    double shipping;

    printf("Enter a to buy artichokes, b for beets, ");
    printf("c for carrots, q to quit: ");
    while ((ch = tolower(getchar())) != 'q')
    {
        if (isspace(ch))
        {
            continue;
        }
        while (getchar() != '\n')
            continue;
        switch (ch)
        {
        case 'a':
        {
            printf("Enter pounds of artichokes: ");
            scanf("%lf", &lb_temp);
            lb_artichokes += lb_temp;
            break;
        }
        case 'b':
        {
            printf("Enter pounds of beets: ");
            scanf("%lf", &lb_temp);
            lb_beets += lb_temp;
            break;
        }
        case 'c':
        {
            printf("Enter pounds of carrots: ");
            scanf("%lf", &lb_temp);
            lb_carrots += lb_temp;
            break;
        }
        default:
        {
            printf("%c is not a valid choice.\n", ch);
        }
        }
        printf("Enter a to buy artichokes, b for beets, ");
        printf("c for carrots, q to quit: ");
    }

    cost_artichokes = price_artichokes * lb_artichokes;
    cost_beets = price_beets * lb_beets;
    cost_carrots = price_carrots * lb_carrots;
    cost_total = cost_artichokes + cost_beets + cost_carrots;
    lb_total = lb_artichokes + lb_beets + lb_carrots;

    if (lb_total <= 0)
    {
        shipping = 0.0;
    }
    else if (lb_total < 5.0)
    {
        shipping = under5;
    }
    else if (lb_total < 20.0)
    {
        shipping = under20;
    }
    else
    {
        shipping = base20 + extralb * lb_total;
    }
    if (cost_total > 100.0)
    {
        discount = DISCOUNT_RATE * cost_total;
    }
    else
    {
        discount = 0.0;
    }
    final_total = cost_total + shipping - discount;

    printf("Your order:\n");
    printf("%.2f lbs of artichokes at $%.2f per pound:$ %.2f\n",
        lb_artichokes, price_artichokes, cost_artichokes);
    printf("%.2f lbs of beets at $%.2f per pound: $%.2f\n",
        lb_beets, price_beets, cost_beets);
    printf("%.2f lbs of carrots at $%.2f per pound: $%.2f\n",
        lb_carrots, price_carrots, cost_carrots);
    printf("Total cost of vegetables: $%.2f\n", cost_total);
    if (cost_total > 100)
    {
        printf("Volume discount: $%.2f\n", discount);
    }
    printf("Shipping: $%.2f\n", shipping);
    printf("Total charges: $%.2f\n", final_total);

    return 0;
}
