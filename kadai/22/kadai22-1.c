#include <stdio.h>
#define LAST 3
#define KOTAE1 "合計値は"
#define KOTAE2 "です。\n"
#define P printf
int main(void) {
	int a,b=0;
	printf("%d回整数を入力してください\n",LAST);
	for (int i = 1; i <= LAST; i++) {
		P(" > ");
		scanf("%d", &a);
		b += a;
	}
	P("%s%d%s",KOTAE1,b,KOTAE2);
}