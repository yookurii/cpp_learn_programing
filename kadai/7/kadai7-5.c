#include <stdio.h>
int main(void) {
	int n = 0, i =700;
	while (i <= 1400) {
		n = n + i;
		i = i + 7;
		
	}
	printf("700から1400までの整数のうち、7の倍数の和は %d です。\n", n);
	return 0;
}