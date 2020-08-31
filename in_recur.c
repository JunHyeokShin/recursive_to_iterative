#include <stdio.h>

void recur(int n)
{
	if(n > 0) {
		recur(n - 1);
		printf("%d ", n);
		recur(n - 2);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	recur(n);
}