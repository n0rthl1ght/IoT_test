#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, sum=0;
	scanf("%d%d", &a, &b);
	
	for (;a <= b; a++) sum+=a*a;
	printf("%d", sum);
	return 0;
}
