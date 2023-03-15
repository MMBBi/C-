#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	for (int i = 1; i <= 31; i++)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()//交换两个变量，不创建第三个变量
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	for (int i = 1; i <= 31; i++)
//	{
//		if (m & n == 1)
//		{
//			count++;
//		}
//		m = m >> 1;
//		n = n >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main()//打印整数二进制的奇数位和偶数位
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 30; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
			
	}
	printf("\n");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
		
	}
	printf("\n");
	return 0;
}



