#include <stdio.h>
int main(void) {
	char a, b, t;

	printf("a と b の値を入力してください > ");

	scanf("%c", &a);
	scanf("%c", &b);

	printf("交換前\n");
	printf("a = %c, b = %c\n", a, b);

	t = a;
	a = b;
	b = t;

	printf("交換後\n");
	printf("a = %c, b = %c\n", a, b);

	return 0;
}