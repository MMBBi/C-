#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()//��ʮ�������е����ֵ
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

//int main()//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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
//	printf("****** 1. ��ʼ ******\n");
//	printf("****** 0. �˳� ******\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int ret = rand()%100 + 1;
//	int num = 0;
//	while (1)
//	{	
//		printf("������:>");
//		scanf_s("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��");
//		scanf_s("%d", &put);
//		switch (put)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//		
//	} while (put);
//
//	return 0;
//}