#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main() {
	//sizeof��һ��������
	//�������ͻ��߱����Ĵ�С
	int a = 0;
	printf("%d\n", sizeof(int));
	//sizeof �����Ǳ���ʱ������ʡ�����ţ�
	//�ɴ˿ɼ�sizeof��һ����������������һ������
	printf("%d\n", sizeof a);
	return 0;
}