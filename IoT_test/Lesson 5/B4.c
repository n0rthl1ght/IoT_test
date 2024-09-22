#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	if (99 < a && a <= 999)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

