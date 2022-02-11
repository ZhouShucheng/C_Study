#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main() {
	//sizeof是一个操作符
	//计算类型或者变量的大小
	int a = 0;
	printf("%d\n", sizeof(int));
	//sizeof 后面是变量时，可以省略括号，
	//由此可见sizeof是一个操作符，而不是一个函数
	printf("%d\n", sizeof a);
	return 0;
}