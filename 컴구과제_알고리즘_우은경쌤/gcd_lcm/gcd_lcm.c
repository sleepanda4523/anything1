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
	printf("최대공약수/최소공배수를 구할 두 수를 입력해주세요\n");
	scanf("%d %d", &a, &b);
	printf("최대공약수 : %d\n최소공배수 : %d", gcd(a, b), lcm(a, b));

	return 0;
}
