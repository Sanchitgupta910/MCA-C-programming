/*program to convert celcius into fahrenheit or vice-versa

formulae:
celcius to fahreheit= (c*9/5)+32= f
fahrenheit to celcius= (f-32)*5/9= c

Authon: Sanchit Gupta
Date: 21st Aug'21*/


#include<stdio.h>
int main()
{
	float F, C; 
	int n;
	
	printf("Press 1 to convert temperature from celcius to fahrenheit\n");
	printf("Press 2 to convert temperature from fahrenheit to celcius\n");
	printf("Enter your choice:\n");
	scanf("%d", &n);
	
	if ((n==1) || (n==2)) //condition statement
	{
		if(n==1) //converting celcius to fahrenheit
		{
			printf("Enter the tempertaure in celcius: ");
			scanf("%f", &C);
			F=(C*9/5)+32;
			printf("\nYour tempertaure in Fahrenheit is: %f",F);
		}
		else // converting fahrenheit to celcius
		{
			printf("Enter the tempertaure in fahrenheit: ");
			scanf("%f", &F);
			C=(F-32)*5/9;
			printf("\nYour tempertaure in Celcius is: %f",C);
		}
	}	
	else 
	printf("Please enter a valid input");
	
	return 0;
}
