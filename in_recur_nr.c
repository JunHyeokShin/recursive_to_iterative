#include <stdio.h>
#include "IntStack.h"

void recur(int n)
{
	IntStack s;

	Initialize(&s, 100);

	while(1) {
		while(n > 0) {
			Push(&s, n);
			n = n - 1;
		}
		if(!IsEmpty(&s)) {
			Pop(&s, &n);
			printf("%d ", n);
			n = n - 2;
		} else {
			break;
		}
	}
	Terminate(&s);
}

int main(void)
{
	int n;

	scanf("%d", &n);
	recur(n);
}