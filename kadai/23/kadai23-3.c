#include <stdio.h>
int main(void) {
	char moji[100],f;
	int a, b;

	printf("半角文字列 > ");
	gets(moji);

	printf("何番目と何番目の文字を入れ替えますか？ > ");
	scanf("%d%d", &a, &b);

	f = moji[a];
	moji[a] = moji[b];
	moji[b] = f;

	printf("入れ替え後の文字列\n");
	for (int i = 0; i <= 100; i++) {
		if (moji[i] != '\0') {
			printf("%c", moji[i]);
		}
		else {
			printf("\n");
			break;
		}
	}
	return 0;
}