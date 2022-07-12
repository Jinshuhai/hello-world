#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main(void)
//{
//	char ch = '\x012';
//
//	printf("ch = %o\n", ch);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	printf("Please enter a character\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//	return 0;
//}

//int main()
//{
//	printf("float size = %d\n", sizeof(float));
//	return 0;
//}

//int main()
//{
//	float noah;
//	float jonah;
//	double trouble;
//
//	float planck = 6.63e-34;
//	long double gnp;
//	return 0;
//}

int main(void)
{
	//float aboat = 32000.0f; //floatµ¥¾«¶È
	//double abet = 2.14e9;
	//long double dip = 5.32e-5L;
	//printf("%f can be written %e\n", aboat, aboat);
	//printf("And it's %a in hexadecimal, power of 2 notation\n", aboat);

	float toobig = 3.4E38 * 100.0f;
	printf("%e\n", toobig);
	return 0;

}