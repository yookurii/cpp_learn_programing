#include <stdio.h>
int main(void) {
	int x=5, y=5,a;
	while (x <= 5 && x >= 1 && y <= 5 && y >= 1) {
		printf("xは%d,yは%dです。\n", x, y);
		printf("4,6,2,8のいずれかを入力 > ");
		scanf("%d", &a);
		if (a == 4) {
			x = x - 1;
		}
		if (a == 6) {
			x = x + 1;
		}
		if (a == 2) {
			y = y + 1;
		}
		if (a == 8) {
			y = y - 1;
		}
	}
	return 0;
}