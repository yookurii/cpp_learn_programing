#include <stdio.h>
int main(void) {
	double a, b;
	int c, d, e, f, i;
	printf("小数点第3位の精度の実数を2個 > ");
	scanf("%lf%lf", &a, &b);
	c = a * 1000;
	d = b * 1000;
	e = c % 10;
	f = d % 10;
	i = e + f;
	printf("%d+%d=%d\n", e, f, i);

	return 0;
}