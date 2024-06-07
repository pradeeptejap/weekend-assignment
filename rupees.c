//convert rupees into paise
#include <stdio.h>
main()
{
    int rupe , paise ;

    rupe = paise = 0;

    printf("Enter the total amount of rupees : ");
    scanf("%d",&rupe);

    paise = rupe * 100;

    printf("\n rupees in the form of paises is : %d  \n\n",paise);
}

