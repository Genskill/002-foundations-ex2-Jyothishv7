#include<stdio.h>
#include<cs50.h>
int main(void)
{
	float num1=get_float("side 1 ");
	float num2=get_float("side 2 ");
	float num3=get_float("side 3 ");
	if(num1>num2 && num1>num3)
		{
			if(num2*num2+num3*num3==num1*num1)
			printf("Yes");
			else
			printf("No");
		}
	if(num2>num3 && num2>num1)
		{
			if(num1*num1+num3*num3==num2*num2)
			printf("Yes");
			else
			printf("No");
		}
	else
		{	if(num1*num1+num2*num2==num3*num3)
			printf("Yes");
			else
			printf("No");
		}
}
