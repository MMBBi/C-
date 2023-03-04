#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()                              //找出1-100以内的奇数
//{
//	int a = 1;
//	for ( a = 1; a <= 100; a++)
//	{
//		if (1 == a % 2)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int m = 2;
//    int n = 1;
//    switch (n)
//    {
//        case 1:
//            m++;
//        case 2:
//            n++;
//        case 3:
//        switch (n)     //switch允许嵌套使用
//        {        
//          case 1:
//          n++;
//          case 2:
//          m++;
//          n++;
//          break;
//    }
//        case 4:
//            m++;
//            break;
//            default:
//            break;
//}
//        printf("m = %d, n = %d\n", m, n);
//return 0;

//int main()  //输入两个数，求最大公约数。
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d",&a ,&b);
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main() //打印1000-2000年的闰年
//{
//	int year = 1000;
//
//	while (year >= 1000 && year <= 2000)
//	{
//		if (year%4 == 0 && year%100 != 0)
//		{
//			printf("%d ", year);
//		}
//		year++;
//	}
//	return 0;
//}

//int main() //打印1-100之间 3的倍数
//{
//	int i = 0;
//	for (i = 1 ; i <= 100 ; i++)
//	{
//		if (0 == i%3)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() //打印100-200之间的素数。
//{
//	int i = 0;
//	for ( i = 101; i <= 200 ; i++)
//	{
//		int a = 0;
//		for (a = 2; a < i; a++)
//		{
//			if (i%a == 0)
//			{
//				break;
//			}
//		}
//		if (i == a)
//		{	
//			printf("%d ", i);
//		}
//					
//	}
//	return 0;
//}


//计算1！+2！+3！.....10!的值
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
	//for (n = 1; n <= 10; n++)
	//{
	//	ret = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
//	for (n = 1; n <= 10; n++) //高效
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int zs = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = zs - 1;
	while (left <= right)
	{
		int m = (left + right) / 2;
		if (arr[m] < k)
		{
			left = m + 1;
		}
		else if (arr[m] > k)
		{
			right = m - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", m);
			break;
		}
	}
	if (left > right)
	{
		printf("寄了！找不到了！\n");
	}
	return 0;
}
