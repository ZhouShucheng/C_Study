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
//	//��ʱָ��pָ��ľֲ�����a�ĵ�ַ���ͷ��ˣ�pΪҰָ��
//	int*p = test(); 
//	*p = 20; 
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//ָ���ָ�������ǰ�᣺
//	//����ָ��ָ��ͬһ��ռ�
//	//printf("%d\n", &arr[9] - &c[0]);//err
//
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;//������
//	
//	//[] ��һ��������  2��arr������������
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
	assert(src != NULL);//���ԣ������ڱ��ʽ���Ϊ�棬ʲô�����ᷢ��
	assert(dest != NULL);//����
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;//hello�Ŀ���
	}

	return ret;//����Ŀ��ռ����ʼ��ַ
}

int main()
{
	//const ���α�������������ͱ���Ϊ������,���ܱ��޸ģ����Ǳ����ϻ��Ǳ���

	const int num = 10;
	//num = 20;//err

	int n = 100;
	const int* p1 = &num;
	//1. const����ָ�������ʱ��
	//const �������*����ߣ����ε���*p,��ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
	//      ����ָ����������ǿ����޸ĵ�
	//*p1 = 20;//err
	p1 = &n;//ok

	int* const p2 = &num;
	//2. const����ָ�������ʱ��
	//const �������*���ұߣ����ε���ָ�����p,��ʾָ��������ܱ��ı�
	//      ����ָ��ָ������ݣ����Ա��ı�
	*p2 = 20;//ok
	//p2 = &n;//err

	printf("%d\n", num);

	return 0;
}