#include <stdio.h>
int main(void) {
	int i = 0, x = 0;
	do {
		x = x + 7;
		if (x % 10 <= 5) {
			i = i + x;
			printf("%d\n", x);
		}
		else {
		}
	} while (i < 1000);
	printf("条件を満たす数の合計は%dです。\n", i);
	return 0;
}