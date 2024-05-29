/*
About  :- To Read Quantity And Print Total Amount
Author :- Pradeep
Date   :- 28-05-24
*/
#include <stdio.h>
main ()
{
    int qty; //For The Quantity
    float per = 90.56,total; //Cost Per Kg & Total
    //Initiated To Zero
    qty = total= 0;

    printf("Enter The Quantity Of Rice In Kg: %d",qty);
    scanf("%d",&qty);

    total = qty * per;
    printf("Cost Per %d kgs Rice Is: %f\n\n",qty,total);

}
