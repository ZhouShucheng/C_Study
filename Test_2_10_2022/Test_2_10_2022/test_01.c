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
//	printf("����������:>");
//	scanf("%s", password);//123456
//	printf("��ȷ������(Y/N):>");
//	//����������һ���ַ�
//	//getchar();//����'\n'
//	// 
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//�����ɶ��
//	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}

//void bubble_sort(int arr[], int sz)//�β�arr������ָ��
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//��������ʲô��
//��������������Ԫ�صĵ�ַ
// ������2������
//1. sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С,��λ���ֽ�
//2. &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);//1 - &arrȡ����������ĵ�ַ
	printf("%p\n", &arr+1);//


	printf("%p\n", arr);//2
	printf("%p\n", arr+1);//2

	int sz = sizeof(arr);//��������ʾ��������
	printf("%d\n", sz);

	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);//����������Ԫ�صĵ�ַ

	return 0;
}