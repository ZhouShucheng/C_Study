#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	float f = 1E3;
//	printf("%f\n", f);
//	return 0;
//}

//#include <stdio.h>
//int i;//i��ȫ�ֱ���������ʼ����Ĭ����0
//int main()
//{
//    i--;//-1
//    //sizeof���������������Ľ����������unsigned int
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
//	//pf����һ������ָ�����
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
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void(*)() - ����ָ������
//	//2. (void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3. *(void(*)())0 - ��0��ַ�����˽����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	//<c�����ȱ��>
//
//	return 0;
//}
//
////1
//void (* signal(int, void(*)(int) ) )(int);
////typedef - �����ͽ����ض���
//
////2.��
//typedef void(*pfun_t)(int) ;//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//pfun_t signal(int, pfun_t);
//
//typedef unsigned int uint;
//
////��⣺
////1. signal ��()�Ƚ�ϣ�˵��signal�Ǻ�����
////2. signal�����ĵ�һ��������������int,�ڶ��������������Ǻ���ָ��
//// �ú���ָ�룬ָ��һ������Ϊint,����������void�ĺ���
////3. signal�����ķ�������Ҳ��һ������ָ��
//// �ú���ָ�룬ָ��һ������Ϊint,����������void�ĺ���
//// signal��һ������������

int main() {
	char a = 'w';

	printf("%p\n", &a);
	printf("%p\n", &a + 1);
	return 0;
}

