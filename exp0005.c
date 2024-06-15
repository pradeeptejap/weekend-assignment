//Check weither The Given Number is Positive Or Not
#include <stdio.h>
main()
{
    int num =0;

    printf("Enter A Number : ");
    scanf("%d",&num);

           if (num < 0)
             {
                 printf("\n %d Is -Ve \n\n",num);
             }
           else
              if (num > 0)
                printf("\n %d is Positive Number \n\n",num);
              else
                 printf("\n\a The Number is zero enter either +ve or -ve\n\n");

    printf("Thank You Come Again \n\n");
}

