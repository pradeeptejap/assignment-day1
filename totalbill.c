/*
to print the total amount of two products
*/
#include<stdio.h>
main()
{
    int p1,p2,billamt;
    
    p1 = p2 = billamt = 0;
    
    printf("Enter The Price Of Product 1: ");
    scanf("%d",&p1);
    
    printf("Enter The Price Of Product 2: ");
    scanf("%d",&p2);
    
    billamt = p1 + p2;
    
    printf("The Total Amount : %d",billamt);
    
}
