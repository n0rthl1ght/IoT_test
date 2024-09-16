#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, min, max;
	scanf("%d%d", &a, &b);
	if (a>b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}
	printf("%d %d", min, max);
	return 0;
}

