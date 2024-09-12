#include <stdio.h>

int main(int argc, char **argv)
{
	int num, first, second, third, res;
	scanf("%d", &num);
	
	first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;
    res=first * second * third;
    printf("%d", res);
	return 0;
}
