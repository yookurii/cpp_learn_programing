#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int n = 0;
	char moji[100];
	printf("文字列 > ");
	gets(moji);
	n = strlen(moji);
	for (int i = 0; i < n; i++) {
		if (moji[i] == 's') {
			moji[i] = ' ';
		}
		else if (moji[i] == ' ') {
			moji[i] = 's';
		}
			
		else if (moji[i] == 'n') {
			moji[i] = '\n';
		}
		else {
			moji[i] = toupper(moji[i]);
		}
	}
	printf("変換後の文字列 > %s\n",moji);
	return 0;
}