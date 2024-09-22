#include <stdio.h>

int main(int argc, char **argv)
{
	int i, n;
	scanf("%d", &n);
	if (n<101)
		for (i = 1; i <= n; i++) {
			printf("%d %d %d\n", i, i * i, i * i * i);
		}
	else
		printf("error\n");
	return 0;
}

