/*@author: Sanchit Gupta

C program to find the square of a number using more than one function*/


#include<stdio.h>

// function declarations
int getNumber();
int square(int n);
void display(int n, int sqr);

//function call
int main()
{
   int num = getNumber();
   int result = square(num);
   display(num, result);
   return 0;
}

// function for get input from the user
int getNumber()
{
   int n;
   printf("Enter any number: ");
   scanf("%d",&n);
   return n;
}

// function for finding square value
int square(int n)
{
   return n*n;
}

// function for displaying result
void display(int n, int sqr)
{
   printf("Square of %d = %d\n", n, sqr);
}
