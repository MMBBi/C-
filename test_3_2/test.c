#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()                               // 已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//{                                        //输入一个整数x。（-10000<x<10000），输出y的值。
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
// int get_max(int x,int y)                    //创建一个函数get_max,定义两个变量 x y，如果x>y,那么返回x
//{                                           //否则，返回y
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
//    int num1 = 0;                          //建立两个变量 num1 num2 ，输入 num1 num2， 使用建立的函数get_max
//    int num2 = 0;                          //输出最大值max
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
// int main()                         //输入多组数，如果有一个数大于140，则输出Genius
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
//int main()                                 //输入一个整数M，如果可以被5整除就输出YES，否则输出NO
//{                                          //知识点：%：取余数，例如本题中，思路为，建立一个变量m， 如果m%5等于0说明无余数，能被整除。输出YES
//	int m = 0;                             //有余数说明不能被整除。输出NO
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//
//}
//int main()                                //指定两个整数 a和b，计算a除b的整商和余数。
//{                                         //思路：建立两个变量，a b， 输入，运算，输出。
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