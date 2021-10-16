/* ___________________________________________________________________

@uthor: Sanchit Gupta
RegNo: 2147231
C program to manipulate strings 

______________________________________________________________________*/



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[20],str2[20];
    int ch,i,j;
    do
    {
        
        printf("\n------------------------------\n");
        printf("Press 1:To find Length of String");
        printf("\nPress 2:To reverse of String");
        printf("\nPress 3:To concatenate Strings");
        printf("\nPress 4:To copy the String ");
        printf("\nPress 5:To compare the Strings");
        printf("\nPress 6:Exit");
        printf("\n------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch) /* execute the following code according the user input */
        {
            case 1: /* find the length of the string */
                printf("Enter String: ");
                scanf("%s",str1);
                i=strlen(str1);
                printf("Length of String : %d\n\n",i);
            break;
            case 2: /* find the reverse of the string */
                printf("Enter String: ");
                scanf("%s",str1);
                //strrev(str1);
                printf("Reverse string : %s\n\n",str1);
            break;
            case 3: /* Concatenating the string */
                printf("\nEnter First String: ");
                scanf("%s",str1);
                printf("Enter Second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("String After Concatenation : %s\n\n",str1);
            break;
            case 4: /* copyng the string */
                printf("Enter a String1: ");
                scanf("%s",str1);
                printf("Enter a String2: ");
                scanf("%s",str2);
                printf("\nString Before Copied:\nString1=\"%s\",String2=\"%s\"\n",str1,str2);
                strcpy(str2,str1);
                printf("-----------------------------------------------\n");
                printf("\"We are copying string String1 to String2\" \n");
                printf("-----------------------------------------------\n");
                printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n",str1,str2);
            break;
            case 5: /* comparing the string */
                printf("Enter First String: ");
                scanf("%s",str1);
                printf("Enter Second String: ");
                scanf("%s",str2);
                j=strcmp(str1,str2);
                if(j==0)
                {
                    printf("Strings are Same\n\n");
                }
                else
                {
                    printf("Strings are Not Same\n\n");
                }
            break;
            case 6:
                exit(0);
            break;
            default:
                printf("Invalid Input. Please Enter valid Input.\n\n ");
        }
    }while(ch!=6);
    return 0;
}
