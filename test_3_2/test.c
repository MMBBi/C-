#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()                               // ��֪һ������y=f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��
//{                                        //����һ������x����-10000<x<10000�������y��ֵ��
//   int x = 0;
//   int y = 0;
//   scanf("%d",&x);
//   if (x < 0)
//	   y = 1;
//   else if (x == 0);
//   else(y = -1);
//   printf("%d\n" ,y);
//
//return 0;
//}
//
// 
// 
// 
// 
// int get_max(int x,int y)                    //����һ������get_max,������������ x y�����x>y,��ô����x
//{                                           //���򣬷���y
//
//    if (x > y)                              
//
//        return x;                           
//
//    else                                    
//
//        return y;
//}
//
//int main()                                      
//{
//    int num1 = 0;                          //������������ num1 num2 ������ num1 num2�� ʹ�ý����ĺ���get_max
//    int num2 = 0;                          //������ֵmax
//   scanf("%d%d", &num1, &num2);            
//   int max = get_max(num1, num2);
//   printf("max=%d\n", max);
//   return 0;
//}
//
// 
// 
// 
// 
// int main()                         //����������������һ��������140�������Genius
//{
//	int iq = 0;
//	while (scanf("%d", &iq) !=EOF)
//	{
//		if (iq >= 140)
//		printf("Genius\n");
//		
//		
//	}
//	return 0;
//}
//int main()                                 //����һ������M��������Ա�5���������YES���������NO
//{                                          //֪ʶ�㣺%��ȡ���������籾���У�˼·Ϊ������һ������m�� ���m%5����0˵�����������ܱ����������YES
//	int m = 0;                             //������˵�����ܱ����������NO
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//
//}
//int main()                                //ָ���������� a��b������a��b�����̺�������
//{                                         //˼·����������������a b�� ���룬���㣬�����
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int x = a / b;
//	int y = a % b;
//	printf("%d %d\n",x,y);
//
//	return 0;
//}





int main()
{
	int i = 0;
	float hi = 0.0;
	float sum = 0.0;
		while (i<5)
		{
			scanf("%f", &hi);
			sum = sum + hi;
			i++;
		}
		printf("%.2f\n", sum / 5);
	return 0;
}