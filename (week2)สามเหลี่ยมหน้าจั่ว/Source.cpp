#include<stdio.h>
int main()
{
	int i, n, m;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (m = 0; m <= i; m++) {
			printf("* ");
		}
		printf("\n");
	}
	for (i = n; i <= n; i--) {
		if (i >= 0) {
			for (m = 1; m < i; m++) {
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}