#include <stdio.h>

int main()
{
	// 1. �ƽ�Ű �ڵ带 �̿��� ��ȯ
	int c_num = 65;
	printf("%c\n", (char)c_num);

	char i_str = 'A';
	printf("%d\n", (int)i_str);

	// 2. �Ǽ� -> ����
	double d_num = 10.9999;
	printf("%d\n", (int)d_num);

	// 3. ���� -> �Ǽ�
	int i_num = 10;
	double value = (double)i_num;
	printf("%f\n", value);
}