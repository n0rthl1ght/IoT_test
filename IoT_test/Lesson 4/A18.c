#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a == b)
		printf("Equal\n");
	else if (a > b)
		printf("Above\n");
	else
		printf("Less\n");
	return 0;
}

