#include <stdio.h>

void recur(int n)
{
	if(n > 0) {
		recur(n - 1);
		recur(n - 2);
		printf("%d ", n);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	recur(n);
}