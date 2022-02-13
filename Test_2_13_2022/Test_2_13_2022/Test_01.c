#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	float f = 1E3;
//	printf("%f\n", f);
//	return 0;
//}

//#include <stdio.h>
//int i;//i是全局变量，不初始化，默认是0
//int main()
//{
//    i--;//-1
//    //sizeof这个操作符，算出的结果的类型是unsigned int
//    if (i > sizeof(i))//
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf就是一个函数指针变量
//	//int (*pf)(int, int) = &Add;
//
//	int (*pf)(int, int) = Add;//Add === pf
//	int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2
//	//int ret = Add(3, 5);//3
//	
//	//int ret = * pf(3, 5);//err
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1. void(*)() - 函数指针类型
//	//2. (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	//<c陷阱和缺陷>
//
//	return 0;
//}
//
////1
//void (* signal(int, void(*)(int) ) )(int);
////typedef - 对类型进行重定义
//
////2.简化
//typedef void(*pfun_t)(int) ;//对void(*)(int)的函数指针类型重命名为pfun_t
//pfun_t signal(int, pfun_t);
//
//typedef unsigned int uint;
//
////理解：
////1. signal 和()先结合，说明signal是函数名
////2. signal函数的第一个参数的类型是int,第二个参数的类型是函数指针
//// 该函数指针，指向一个参数为int,返回类型是void的函数
////3. signal函数的返回类型也是一个函数指针
//// 该函数指针，指向一个参数为int,返回类型是void的函数
//// signal是一个函数的声明

int main() {
	char a = 'w';

	printf("%p\n", &a);
	printf("%p\n", &a + 1);
	return 0;
}

