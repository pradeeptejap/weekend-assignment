//Convert Days Into Years , Days , Weeks , Days

#include <stdio.h>
main()
{
    int udays , year , month , week , days ;

    year = month = week = days = 0;

    printf("Enter The No Of Days : ");
    scanf("%d",&udays);

    year = udays/365;
    udays %= 365 ;
    month =  udays/30;
    udays %= 30;
    week =  udays/7;
    udays %= 7;
    days =  udays%7 ;

    printf("Years : %d \n",year);
    printf("Months : %d \n",month);
    printf("weeks : %d \n",week);
    printf("Days : %d \n",days);
}


