/*

C program to print all permutations of a given string using pointers.
@Author: Sanchit Gupta
Register No: 2147231

*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

//funcn to swap values at two pointer
void changePosition(char *ch1, char *ch2)
{
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

//funcn to print all the possible permutations of a given string
/*this funcn takes 3 parameters 
>string
>starting index of string
>ending index of string*/

void charPermu(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s  ", a);
   else
   {   
   	   //running the loop from left to right of the string
       for (i = l; i <= r; i++) 
       {
       	  //swapping a+l with a+i
          changePosition((a+l), (a+i)); 
          
          //recursive func: calculating all the possible permutation by fixing the first char
          charPermu(a, l+1, r); 
          
          //inorder to follow the path we are doing back tracking
          changePosition((a+l), (a+i)); 
       }
   }
}
 
int main()
{
	//a string of max 10 character is accepted
	char str[10];
	printf("Enter a string for permutation: ", str);
    scanf("%s",str);
    printf("\n\n Pointer : Generate permutations of a given string :\n"); 
    printf("________________________________________________________\n"); 
    int n = strlen(str);
    printf(" The permutations of the string are : \n");
    charPermu(str, 0, n-1);
     printf("\n\n");
    return 0;
}

