#include <stdio.h>
int main(void) {
	char st[80];
	printf("文字列 > ");
	gets(st);
	for (int i = 0; i <= 80; i++) {
		if (st[i] == 'p' || st[i] == 'g') {
			for (int d = i; d <= 80; d++) {
				st[d] = st[d+1];
			}
		}
		else if(st[i] == '\0') {
			break;
		}
		else if (st[i] == 'n') {
			st[i] = '\0';
		}
		else {
		}
	}
	printf("pとgを除いた文字列：%s\n", st);
	return 0;
}