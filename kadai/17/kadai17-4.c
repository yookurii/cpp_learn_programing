#include <stdio.h>
int main(void) {
	char st[100];
	int d;
	d = 'a' - 'A';
	printf("文字列 > ");
	gets(st);
	printf("読み込んだ文字列：%s\n",st);
	for (int i = 0; i <= 100; i++) {
		if (st[i] >= 'A'&&st[i] <= 'Z') {
			st[i] += d;
		}
		else if (st[i] == 'a' || st[i] == 'i' || st[i] == 'u' || st[i] == 'e' || st[i] == 'o') {
			st[i] -= d;
		}
		else if (st[i] == '\0') {
			break;
		}
		else {
		}
	}
	printf("書き換え後の文字列：%s\n", st);
	return 0;
}