#include <stdio.h>
main()
{
    int age ;
    char gen , mar[9] ;

    printf("Enter Age Of The Person : ");
    scanf("%d",&age);

    printf("Enter Gender Of The Person (M/F) : ");
    fflush(stdin);
    scanf("%c",&gen);

    printf("Enter Your Status Of Living (Married/Unmarried) : ");
    scanf("%s",&mar);

    if (mar == 'married')
        printf("\n Your Are Eligible For Bonus.... \n\n");
    else
        if (gen == 'm' && age >= 30)
            printf("\n You Are Eligible For Bonus.... \n\n");
        else
            if (gen == 'f' && age >= 25)
                printf("\n You Are Eligible For Bonus.... \n\n");
        else
            printf("Your Not Eligible For Bonus!......");
}


