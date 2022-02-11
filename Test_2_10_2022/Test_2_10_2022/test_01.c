#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区的一个字符
//	//getchar();//处理'\n'
//	// 
//	//清理缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//结果是啥？
//	//注：printf函数的返回值是打印在屏幕上字符的个数
//	return 0;
//}

//void bubble_sort(int arr[], int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//数组名是什么？
//数组名是数组首元素的地址
// 但是有2个例外
//1. sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小,单位是字节
//2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);//1 - &arr取出的是数组的地址
	printf("%p\n", &arr+1);//


	printf("%p\n", arr);//2
	printf("%p\n", arr+1);//2

	int sz = sizeof(arr);//数组名表示整个数组
	printf("%d\n", sz);

	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);//数组名是首元素的地址

	return 0;
}