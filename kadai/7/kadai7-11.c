#include <stdio.h>
int main(void) {
	int d=1,f=0,i,b;
	double c, x=0.0;
	do {
		for (i = 1; i <= d; i++) {
			f = i - 1;
			b = (f * 2)-1;
		}
		c = 1.0 / b;
		x = x + c;
		d++;
	} while (d <= 2000);

	printf("求める無限級数の和は、%.30fです。", c);
	return 0;
}