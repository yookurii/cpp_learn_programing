#include <stdio.h>
#include <string.h>
int main(void) {
	int len;
	char str[100], str2[100];

	printf("文字列2個 > ");
	scanf("%s%s", str, str2);

	strcat(str, str2);
	len = strlen(str);

	printf("2つの文字列長の合計は%dです。\n", len);
	return 0;
}