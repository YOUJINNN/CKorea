#include <stdio.h>

int main()
{
	// ũ�⸦ �������� ���� ���ڿ� ���� ����
	char str[] = "hello world!";

	// ũ�⸦ ������ ���ڿ� ���� ����
	char str2[7] = "string";

	printf("%s\n", str);

	int str_len = 0;
	char str3[] = "string";
	while (str3[str_len] != '\0')
	{
		str_len++;
	}
	printf("���ڿ��� ���̴� %d�̴�.", str_len);
}