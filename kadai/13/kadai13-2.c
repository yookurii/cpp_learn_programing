#include <stdio.h>
int main(void) {
	int x[100], i, n = 0, m = 0, l = 0;

	for (i = 0; i <= 99; i++) {
		x[i] = i;
	}

	n = x[0];
	m = x[49];
	l = x[99];

	printf("最初の要素 : %d\n", n);
	printf("50個目の要素 : %d\n", m);
	printf("最後の要素 : %d\n", l);

	return 0;
}