#include <stdio.h>
int main(void) {
	int x[10],i,j,n,m;
	for (i = 0; i <= 9; i++) {
		printf("整数を入力してください > ");
		scanf("%d", &n);
		x[i] = n;
	}
	printf("入力された整数は、");
	for (j = 0; j <= 9; j++) {
		m = x[j];
		printf("%d ", m);
	}
	printf("です。\n");
	return 0;
}