#include<stdio.h>
int main()
{
	float a;
	scanf_s("%f", &a);
	if (a < 0) printf("Please insert the number that is greater or equal zero");
	else if (a >= 0 && a < 50) printf("Fail");
	else printf("Pass");
	return 0;
}