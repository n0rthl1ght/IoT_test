#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, e, max_ab, max_cd, max_abcd, max;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	max_ab = (a > b) ? a : b;
    max_cd = (c > d) ? c : d;
    max_abcd = (max_ab > max_cd) ? max_ab : max_cd;
    max = (max_abcd > e) ? max_abcd : e;
	printf("%d", max);
	return 0;
}

