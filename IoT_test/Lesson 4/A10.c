#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, e, min_ab, min_cd, min_abcd, min;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	min_ab = (a < b) ? a : b;
    min_cd = (c < d) ? c : d;
    min_abcd = (min_ab < min_cd) ? min_ab : min_cd;
    min = (min_abcd < e) ? min_abcd : e;
	printf("%d", min);
	return 0;
}

