#include <stdio.h>
int main(void) {
	int a, b, x = 0, n = 0,i;
	printf("整数を入力してください > ");
	scanf("%d", &i);
	for (a = 0; a <= i; a++) {
		for (b = 0; b <= a; b++) {
			x = x + b;
		}
	}
	printf("%dまでの総和の合計は%dです。\n", i, x);
	return 0;
}