#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100] = "AAA", str2[100], str3[100], str4[100];
	printf("文字列 > ");
	scanf("%s", str2);
	strcat(str, str2);

	printf("文字列 > ");
	scanf("%s", str3);
	strcat(str, str3);

	printf("文字列 > ");
	scanf("%s", str4);
	strcat(str, str4);

	printf("全て連結した文字列は%sです。\n", str);


	return 0;
}