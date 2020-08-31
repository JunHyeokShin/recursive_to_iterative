#include <stdio.h>
#include "IntStack.h"

void recur(int n)
{
	IntStack s;
	Initialize(&s, 100);

	Push(&s, n);
	while(!IsEmpty(&s)) {
		Pop(&s, &n);
		if(n > 0) {
			printf("%d ", n);
			Push(&s, n - 2);
			Push(&s, n - 1);
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