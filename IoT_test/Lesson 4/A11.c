#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d, e, max_ab, max_cd, max_abcd, max, min_ab, min_cd, min_abcd, min, res;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	max_ab = (a > b) ? a : b;
    max_cd = (c > d) ? c : d;
    max_abcd = (max_ab > max_cd) ? max_ab : max_cd;
    max = (max_abcd > e) ? max_abcd : e;
	
	min_ab = (a < b) ? a : b;
    min_cd = (c < d) ? c : d;
    min_abcd = (min_ab < min_cd) ? min_ab : min_cd;
    min = (min_abcd < e) ? min_abcd : e;
    
    res = min + max;
    printf("%d", res);
	return 0;
}
