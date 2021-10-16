#include<stdio.h>
int main()
{
    float amt, ipy,  ipm;
    const int monthinyr = 12;
    int nm, yr;
    
    printf( "Input loan amount (0 to quit): " );
    scanf( "%f", &amt );

    while( (int)amt != 0) 
    {
        printf( "Input interest rate per year rate: " );
        scanf( "%f", &ipy );
        printf( "Input the no of years " );
        scanf( "%d", &yr );

        nm = yr* monthinyr;
        ipm = (ipy/monthinyr)/100;
        printf( "No of months: %d\n", nm );
		printf( "No of years: %d\n", yr );
		
        printf( "\n\nInput loan amt (0 to quit): " );
        scanf( "%f", &amt );
    }

    return 0;
}
