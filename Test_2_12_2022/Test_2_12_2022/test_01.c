#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main() {
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//
//	printf("%d\n", s);//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	//这时指针p指向的局部变量a的地址被释放了，p为野指针
//	int*p = test(); 
//	*p = 20; 
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减的前提：
//	//两个指针指向同一块空间
//	//printf("%d\n", &arr[9] - &c[0]);//err
//
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;//数组名
//	
//	//[] 是一个操作符  2和arr是两个操作数
//	//a+b
//	//b+a
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//arr[2] --> *(arr+2)-->*(2+arr)-->2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
//	return 0;
//}

#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);//断言，括号内表达式结果为真，什么都不会发生
	assert(dest != NULL);//断言
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;//hello的拷贝
	}

	return ret;//返回目标空间的起始地址
}

int main()
{
	//const 修饰变量，这个变量就被称为常变量,不能被修改，但是本质上还是变量

	const int num = 10;
	//num = 20;//err

	int n = 100;
	const int* p1 = &num;
	//1. const修饰指针变量的时候
	//const 如果放在*的左边，修饰的是*p,表示指针指向的内容，是不能通过指针来改变的
	//      但是指针变量本身是可以修改的
	//*p1 = 20;//err
	p1 = &n;//ok

	int* const p2 = &num;
	//2. const修饰指针变量的时候
	//const 如果放在*的右边，修饰的是指针变量p,表示指针变量不能被改变
	//      但是指针指针的内容，可以被改变
	*p2 = 20;//ok
	//p2 = &n;//err

	printf("%d\n", num);

	return 0;
}