#include <stdio.h>

int main(int argc, char **argv)
{
	int X1, Y1, X2, Y2;
    double k, b;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

    k = (double)(Y2 - Y1) / (X2 - X1);
    if (X1 != X2){
		b = Y1 - k * X1;
		printf("%.2f %.2f\n", k, b);
	}
	else
		printf("X1 and X2 are equal. y = k*x + b can't be applied");
	return 0;
}

