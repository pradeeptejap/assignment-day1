/*
Swap Without Using Third Variable
Author :- Pradeep
Date :- 30-05-24
*/

#include <stdio.h>
main()
{
   int a,b;

   a = b = 0;

   printf("Enter The Value Of A : ");
   scanf("%d",&a);

   printf("Enter The Value Of B : ");
   scanf("%d",&b);

   a = a + b;
   b = a - b;
   a = a - b;

   printf("\nA Value Is : %d ",a);
   printf("\nB Value Is : %d ",b);
}
