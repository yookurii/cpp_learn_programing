#include <stdio.h>
int main(void) {
	int i, x = 0;
	for (i = 123; i <= 456; i++) {
		if (i % 3 == 0) {
			x = x + i;
		}
		else {
		}
	}
	printf("123から456までの整数のうち、3の倍数の和は%dです。\n", x);
	return 0;
}