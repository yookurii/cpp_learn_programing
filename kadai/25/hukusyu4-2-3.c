#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100], str2[100];
	printf("文字列2個 > ");
	scanf("%s%s", str,str2);

	if (strcmp(str,str2)==0) {
		printf("一致しています\n");
	}
	else {
		printf("違います\n");
	}



	return 0;
}