//Read The Price Of Iphone & Case Cover And Calculate The Total Bill

#include <stdio.h>
main()
{
    int amt , paidamt , tot ;

    amt = paidamt = tot = 0;

    printf(" Enter The Total Bill Amount :");
    scanf("%d",&amt);

    printf(" Enter The Amount Paid By The Customer : ");
    scanf("%d",&paidamt);

    tot = paidamt - amt ;

    printf(" \nBalance Amount To Be Returned : Rs. %d/-",tot);
}
