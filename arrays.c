/*___________________________________________________________

Name:  Sanchit Gupta 	Reg no: 2147231
Date: 24 Sept, 2021

C program to print all unique elements in an array.
___________________________________________________________*/

#include <stdio.h>
int main()
{
	/* Creating an array of limit 100 elements and one counter variable ctr */
    int arr1[100], n,ctr=0;
    
    /* Creating 3 integer variable to be used on loop*/
    int i, j, k;
       printf("\n\nThe program prints all unique elements of an array:\n");
       printf("------------------------------------------\n\n");
	   
	   /*To accept the no of input user wants to enter*/	
       printf("Input the number of elements you want to enter: ");
       scanf("%d",&n);
       
       /*To accept input user wants to enter*/
       printf("\nInput %d elements in your array :\n",n);
       
       /*Adding the numbers in the array*/
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
	    
	    /* Printing the array */
	    printf("\n\nThe elements of your array are:\n");
	    for(i=0;i<n;i++)
	    {
	    	printf("%d ", arr1[i]);
		}
    printf("\n\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            /* To check the elements in different position */
            if (i!=j)
            {
               /*Increment the counter when the search value is duplicate.*/	
		       if(arr1[i]==arr1[j])
               {
                 ctr++;
               }
            }
        }
       /* Printing unique elements of the array */ 
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
        
    }    
    
    printf("\n\n");
}
