/*___________________________________________________________

Name:  Sanchit Gupta 	Reg no: 2147231
Date: 24 Sept, 2021

C program storing elements in a matrix and printing it.
___________________________________________________________*/


#include <stdio.h>

void main ()    
{   /* Creating integer type 2D array */ 
    int arr[100][100],i,j,r,c; 
    
	/*To accept the no of input user wants to enter in rows and columns respectively */	
       printf("Input the number of elements you want to enter in rows: ");
       scanf("%d",&r);
       printf("Input the number of elements you want to enter in columns: ");
       scanf("%d",&c);
	
	/* iteratting over rows and columns */       
    for (i = 0; i < r; i++)    
    {    
        for (j = 0; j < c; j++)    
        {    
            printf("Enter the a[%d][%d] element: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }   
	
	/* printing the matrix using for loop */ 
    printf("\nthe Matrix ....\n");     
    for(i = 0; i < r; i++)    
    {    
        printf("\n");
   
        for (j= 0; j < c; j++)  
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}   
