#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int gcd(int a, int b)
{
	if (a % b == 0) {
		return b;
	}
	else {
		int n = a % b;
		gcd(b, n);
	}
}
int lcm(int a, int b)
{
	int n = gcd(a, b);
	return n * (a / n) * (b / n);
}
int main()
{
	int a, b;
	printf("�ִ�����/�ּҰ������ ���� �� ���� �Է����ּ���\n");
	scanf("%d %d", &a, &b);
	printf("�ִ����� : %d\n�ּҰ���� : %d", gcd(a, b), lcm(a, b));

	return 0;
}
