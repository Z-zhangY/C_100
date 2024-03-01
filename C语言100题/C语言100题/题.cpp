#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


// 1.

//int main()
//{
//	int a, b, c;
//	for (a = 1; a < 5; a++)
//	{
//		for (b = 1; b < 5; b++)
//		{
//			for (c = 1; c < 5; c++)
//			{
//				if (a != b && a != c && b != c)
//				{
//					printf("%d%d%d\n", a, b, c);
//				}
//			}
//		}
//	}
//	return 0;
//}


// 2.

int main()
{
	int profit = 0;
	int bonus = 0;
	scanf("%d", &profit);
	if (profit <= 100000 && profit > 0)
	{
		bonus = profit * 0.1;
	}
	else if (profit <= 200000)
	{
		bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
	}
	printf("%d\n", bonus);
	return 0;
}