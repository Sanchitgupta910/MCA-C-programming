/* *****************************************************************************************

@uthor: Sanchit Gupta
Reg no: 2147231		Lab: 7
C program to calculate the party bill using the concept of structure
Date: 15/10/21

********************************************************************************************* */

#include <stdio.h>
//maximum items entry
#define MAX 50
//structure definition
typedef struct item_details{
	char itemName[10];	//item name
	int quantity;	//item quantity
	float price;	//per item price
	float totalAmount; //total amount = quantity*price
}
item;
int main()
{
	item thing[MAX]; //structure variable
	int i,choice;
	int count=0;
	float expenses=0.0f;

	i=0;
	
	do
	{
		printf("Enter item details [%d]:\n",i+1);

		printf("Dish name?  ");
		fgets(thing[i].itemName,10,stdin);

		printf("Price? ");
		scanf("%f",&thing[i].price);

		printf("Plate(s)?  ");
		scanf("%d",&thing[i].quantity);

		thing[i].totalAmount=(float)thing[i].quantity*thing[i].price;
		expenses += thing[i].totalAmount;

		i++;	//increase loop counter
		count++;//increase record counter

		printf("\nWant to more items? (press 1 for YES || press 2 for NO): ");
		scanf("%d",&choice);

		getchar();

	}
	while(choice==1);

	//printing bill
	printf("_______________________________________________\n");
	printf("\nYour order details are:\n");
	printf("_______________________________________________\n");
	printf("\nDish name  price\t Quantity\t total amount");
	for(i=0; i<count; i++)
	{
		printf("\n\n%s\t %.2f\t\t %3d\t\t %.2f\n",thing[i].itemName, thing[i].price, thing[i].quantity, thing[i].totalAmount);
	}
	printf("\n#### Total amount to be paid: %.2f\n",expenses);

	printf("\nWant to divide in friends? (press 1 for YES || press 2 for NO): ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("No of friends amount to be divided? ");
		scanf("%d",&i);
		printf("\nEach friend will have to pay: %.2f\n",(expenses/(float)i));
	}

	printf("~Thanks for using me... Have a nice day!!!~\n");
	return 0;
}

