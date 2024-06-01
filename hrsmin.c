//Convert Minutes Into Hours

#include<stdio.h>
main()
{
    int min , hrs , remmin;

    min = hrs = 0;

    printf("Enter The Time From Hyderabad To Singapore In Minutes : ");
    scanf("%d",&min);

    hrs = min/60;
    remmin = min%60;

    printf("\n Flying Time From Hyderabad To Singapore Is %d Hrs %d Minutes \n",hrs,remmin);

}

