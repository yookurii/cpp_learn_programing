#include <stdio.h>
int main(void) {
	int a,b=0,c;
	for (int i = 1; i <= 5; i++) {
		printf("値を入力してください(%d回目) : ",i);
		scanf("%d", &a);
		if (a >= b) {
			b = a;
			c = i;
		}
		else {
		}
	}
	printf("最大値は%d回目の%dです。\n", c, b);
	return 0;
}