#include <stdio.h>

void PrintInt(int x)
{
	printf("%d です。\n", x);
}

int Kakezan(int a, int b);

int main(void)
{
	int x = 10, y = 20, z;

	z = Kakezan(x, y);


	printf("z(xとyのうち小さい方) は ");
	PrintInt(z);

	printf("x は ");
	PrintInt(x);

	return 0;
}

int Kakezan(int a, int b)
{
	int x;
	if (a < b) {
		x = a;
	}
	else if (a > b) {
		x = b;
	}
	return x;
}
