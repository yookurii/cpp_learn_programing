#include <stdio.h>
int main(void) {
	int a, b, i=0, x=0;
	printf("aとbを入力してください ＞ ");
	scanf("%d%d", &a, &b);
	if (a < b) {
		for (i = a; i <= b; i++) {
			x = x + i;
		}
	}
	else if (a > b) {
		for (i = a; i >= b; i--) {
			x = x + i;
		}
	}
	else if(a==b){
		x = a;
	}
	printf("%dから%dまでの整数の和は%dです。\n", a, b, x);
	return 0;
}