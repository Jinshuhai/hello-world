#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//int main(void)
//{
//	int ch;
//	int count = 0;
//
//	while ((ch = getchar()) != '&')
//	{
//		count++;
//	}
//	printf("The number of characters is %d\n", count);
//	return 0;
//}


//#define SPACE 32
//#define CTRL 64
//#define COL 10				//每行打印10对
//int main(void)
//{
//    char ch;
//    int count = 0;
//
//    while ((ch = getchar()) != EOF)
//    {
//        count++;
//        //打印字符输出
//        if (ch >= SPACE)
//            printf("%c ", ch);
//        //换行符和制表符的输出
//        else if (ch == '\n' || ch == '\t')
//            printf("%s", ch == '\n' ? "\\n" : "\\t");
//        //一般控制字符的输出
//        else
//            printf("^%c", ch + CTRL);
//        printf("%-5d", ch);
//        if (ch == '\n')
//            count = 0;
//        if (count % COL == 0)	//10对换行
//            printf("\n");
//    }
//
//    return 0;
//}

#include <ctype.h>

//int main(void)
//{
//	int lower = 0, upper = 0;
//	char ch;
//	printf("请输入文本:");
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))
//		{
//			lower++;
//		}
//		if (isupper(ch))
//		{
//			upper++;
//		}
//	}
//	printf("小写：%d,大写：%d", lower, upper);
//	return 0;
//}

//int main(void)
//{
//    char ch;
//    int inword = 0;			//在单词中为1否则为0
//    int words = 0;			//单词数
//    int chars = 0;			//字符数
//
//    printf("Please enter some words:\n");
//    while ((ch = getchar()) != '&')
//    {
//        if (!isspace(ch) && !ispunct(ch))
//            chars++;
//        //开始一个新的单词
//        if (!isspace(ch) && !ispunct(ch) && !inword)
//        {
//            inword = 1;
//            words++;
//        }
//        //单词末尾
//        if (isspace(ch) || ispunct(ch) && inword)
//            inword = 0;
//    }
//    printf("There are %d words and %d letters\n",
//        words, chars);
//    printf("The average number of letters of ");
//    printf("each word is %.2f.\n",
//        ((double)chars / (double)words));
//
//	return 0;
//}

//#define LOW 1			
//#define HIGH 100
//int main(void)
//{
//	char response;
//	int guess;
//	int low = LOW;
//	int high = HIGH;
//
//	guess = (low + high) / 2;
//	printf("Pick an integer from %d to %d. I will try to guess ",
//		LOW, HIGH);
//	printf("it.\nRespond with a y if my guess is right, with an s if it\n");
//	printf("is small and with a b if it is big.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while ((response = getchar()) != 'y')
//	{
//		if (response == 's')
//		{
//			low = guess;
//			guess = (low + high) / 2;
//		}
//		else if (response == 'b')
//		{
//			high = guess;
//			guess = (low + high) / 2;
//		}
//		else
//			printf("Sorry, I understand only y, s and b.\n");
//
//		printf("Well, then, is it %d?\n", guess);
//		while (getchar() != '\n')
//			continue;
//		
//	}
//	printf("I knew i could do it!\n");
//	return 0;
//}

//char get_first(void);
//int main(void)
//{
//	char ch;
//	while ((ch = get_first()) != '&')
//	{
//		putchar(ch);
//		printf("\n");
//	}
//	return 0;
//}
//
//char get_first(void)
//{
//	char ch;
//	while (isspace(ch = getchar())) 
//		continue;
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//	return ch;
//}

//#define BASE1 8.75
//#define BASE2 9.33
//#define BASE3 10.00
//#define BASE4 11.20
////四种等级的基本工资
//#define TIME 40			//超过40h为加班
//#define	MUL	1.5		//加班时间算作平时的1.5倍
//#define	RATE1 0.15		//前300美元的税率
//#define RATE2 0.2			//300-450美元的税率
//#define RATE3 0.25		//大于450美元的税率
//#define BREAK1 300		//税率的第一个分界点
//#define BREAK2 450		//税率的第二个分界点
//#define LENGTH 65		//*的长度
//
//char get_choice(void);
//void calculate(double base);
//
//int main(void)
//{
//    double base;
//    char choice;
//
//    while ((choice = get_choice()) != 'q')
//    {
//        switch (choice)
//        {
//        case 'a': base = BASE1;
//            break;
//        case 'b': base = BASE2;
//            break;
//        case 'c': base = BASE3;
//            break;
//        case 'd': base = BASE4;
//            break;
//        default: printf("Please respond with a, b, c, d or q.\n");
//            break;
//        }
//        if (choice >= 'a' && choice <= 'd')
//            calculate(base);
//    }
//	return 0;
//}
//
//char get_choice(void)
//{
//	char ch;
//	int count;
//
//    for (count = 0; count < LENGTH; count++)
//        printf("*");
//    printf("\nEnter the letter corresponding to the desired pay rate or action:\n");
//    printf("%-36s%s", "a) $8.75/hr", "b) $9.33/hr\n");
//    printf("%-36s%s", "c) $10.00/hr", "d) $11.20/hr\n");
//    printf("%s\n", "q) quit");
//    for (count = 0; count < LENGTH; count++)
//        printf("*");
//    printf("\n");
//
//    ch = getchar();
//    while (getchar() != '\n')
//        continue;
//    return ch;
//}
//
//void calculate(double base)
//{
//    double hour, gross, tax;
//    printf("Input your work hours in a week: ");
//    scanf_s("%lf", &hour);
//    while (getchar() != '\n')
//        continue;
//    if (hour <= TIME)
//        gross = hour * base;
//    else
//        gross = TIME * base + (hour - TIME) * MUL * base;
//    //计算总收入
//    if (gross <= BREAK1)
//        tax = gross * RATE1;
//    else if (gross <= BREAK2)
//        tax = BREAK1 * RATE1 + (gross - BREAK1) * RATE2;
//    else
//        tax = BREAK1 * RATE1 + (BREAK2 - BREAK1) * RATE2
//        + (gross - BREAK2) * RATE3;
//    //计算税金
//    printf("Your gross income is $%.2lf\nYour tax is $%.2lf\n"
//        "Your net income is $%.2lf\n",
//        gross, tax, (gross - tax));
//    printf("\n");
//}

float get_float(void);
char get_choice(void);
char get_first(void);
int main(void)
{
	char choice;
	float num1,num2;
	while ((choice = get_choice()) != 'q')
	{
		printf("Enter first number: ");
		num1 = get_float();
		printf("Enter second number: ");
		num2 = get_float();

		switch (choice)
		{
		case 'a': printf("%.2f + %.2f = %.2f\n",
			num1, num2, num1 + num2);
			break;
		case 's': printf(".2%f - %.2f = %.2f\n",
			num1, num2, num1 - num2);
			break;
		case 'm': printf("%.2f * %.2f = %.2f\n",
			num1, num2, num1 * num2);
			break;
		case'd':
			if (!num2)
			{
				printf("Enter a number other than 0: ");
				num2 = get_float();
			}
			printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
			break;
		default:printf("Program error!\n");
			break;
		}
	}
	printf("Bye\n");
	return 0;
}

char get_choice(void)
{
	char ch;

	printf("Enter the operation of your choice:\n");
	printf("%-36s%s\n", "a. add", "s. subtract");
	printf("%-36s%s\n", "m. multiply", "d. divide");
	printf("q. quit\n");

	ch = get_first();
	while (ch != 'a' && ch != 'b' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("Please enter a, s, m, d or q.\n");
		ch = get_first();
	}
	return ch;
}

char get_first(void)
{
	char ch;
	ch = getchar();
	while (getchar() != '\n')
		continue;
	return ch;
}

float get_float(void)
{
	float input;
	char ch;
	while (scanf_s("%f", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}
	while (getchar() != '\n')
		continue;
	return input;
}