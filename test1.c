#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()//求十个整数中的最大值
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	max = arr[0];
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//} 

//int main()//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//
//void meun()
//{
//	printf("*********************\n");
//	printf("****** 1. 开始 ******\n");
//	printf("****** 0. 退出 ******\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int ret = rand()%100 + 1;
//	int num = 0;
//	while (1)
//	{	
//		printf("猜数字:>");
//		scanf_s("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	
//	int put;
//	srand((unsigned int) time(NULL));
//	do
//	{
//		meun();
//		printf("请选择：");
//		scanf_s("%d", &put);
//		switch (put)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//		
//	} while (put);
//
//	return 0;
//}