#include<stdio.h>

int main()
{
	int a = 0; scanf("%d", &a);
	printf("%d", a);
	int k = 9, b = 89;
	int ch = max(k, b);
	printf("%d", ch);
	return 0;
}
int max(int a, int b)
{
	return a + b;
}

