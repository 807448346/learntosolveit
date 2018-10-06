/***
 *
 * Temperature Conversion Program, Fahrenheit to Celsius
 *
 * print Fahrenheit-Celsius table for fahr = 0,20 ... 300
 *
 ***/

#include<stdio.h>

int main(void)
{
	printf("A program print Fahrenheit-Celsius\n");

	int lower, upper, step;
	int celsius, fahr;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while(fahr <= upper)
	{
		celsius =  5 * (fahr - 32) / 9;
		printf("%d\t%d\n",fahr,celsius);
		fahr = fahr + step;
	}

	return 0;
}
