// To Read Bill Amount And The Amount Paid By Customer

#include <stdio.h>
main()
{
    int amt , paidamt , tot;

    amt = paidamt = tot = 0;

    printf("Enter The Total Bill Amount : ");
    scanf("%d",&amt);

    printf("Enter The Total Amount Paid By Customer : ");
    scanf("%d",&paidamt);

    tot = paidamt - amt;

    printf("\n The Remaining Amount Is : %d \n",tot);


}

