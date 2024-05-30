/*
Calculate The Total & Average Of Three Sobjects
Author :- pradeep
date :- 30-05-24
*/
#include <stdio.h>
main()
{
    int m,c,p;
    float avg,tot;

    avg = tot = m = c = p = 0;

    printf("Enter The Marks Of Maths : ");
    scanf("%d",&m);

    printf("Enter The Marks Of Chemistry : ");
    scanf("%d",&c);

    printf("Enter The Marks Of Physics : ");
    scanf("%d",&p);

    tot = m + c + p ;
    avg = tot/3;

    printf("\nTotal Marks : %.0f",tot);
    printf("\nAverage : %.2f %% \n\n",avg);

}
