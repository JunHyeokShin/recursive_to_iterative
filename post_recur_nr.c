#include <stdio.h>
#include "IntStack.h"

void recur(int n)
{
	IntStack s;
	int t;
	Initialize(&s, 100);

	while(1) {
		while(n > 0) {
			Push(&s, n);
			n = n - 1;
		}
		while(!IsEmpty(&s)) {
			t = n;
			Pop(&s, &n);
			if((n - 2) > 0) {
				if((n - 2) == t) {
					printf("%d ", n);
				} else {
					Push(&s, n);
					n = n - 2;
					break;
				}
			} else {
				printf("%d ",n);
			}
		}
		if(IsEmpty(&s)) {
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