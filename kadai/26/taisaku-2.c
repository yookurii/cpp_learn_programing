#include <stdio.h>
int main(void) {
	int a=0;
	char mozi;
	char b[5];
	char moji[100];
	printf("どの文字を探す？ > ");
	scanf("%c", &mozi);
	printf("半角文字列 > ");
	gets(b);
	gets(moji);
	for (int i = 0; i <= 100; i++) {
		if (moji[i] != '\0') {
			if (moji[i] == moji[i + 2]&&moji[i+2]==moji[i+4]) {
				a += 1;
			}
		}
		else {
			break;
		}
	}
	printf("\'%c\'が飛び飛びで出現する回数は%d回です。\n",mozi, a);

	return 0;
}