#include <stdio.h>
#include <conio.h>

float calculate(float, float);

int main()
{
	float x, y, z;
	setbuf(stdout, NULL);

	printf("Input x: ");
	scanf("%f", &x);
	printf("Input y: ");
	scanf("%f", &y);
	z = calculate(x, y);
	printf("z = %f", z);

	_getch();
	return 0;
}

float calculate(float x, float y)
{
	if (x > y)
		return x - y;
	return y - x + 1.0;
}
