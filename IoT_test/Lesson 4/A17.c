#include <stdio.h>

int main(int argc, char **argv)
{
	int month;
	scanf("%d", &month);
	if ((1 <= month && month <= 2) || month == 12)
		printf("winter\n");
	else if (3 <= month && month <= 5)
		printf("spring\n");
	else if (6 <= month && month <= 8)
		printf("summer\n");
	else if (9 <= month && month <= 11)
		printf("autumn\n");
	else
		printf("You must type number of the month!\n");
	return 0;
}

