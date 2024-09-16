#include <stdio.h>

int main(int argc, char **argv)
{
	int num, first, second, third, max;
	scanf("%d", &num);
	
	first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;
    
    if ((first>second) && (first>third))
		max = first;
	else if ((second>third) && (second>first))
		max = second;
	else
		max = third;
		
    printf("%d", max);
	return 0;
}

