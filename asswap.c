//Swapping Two Variables Without Using Third Variable

#include <stdio.h>
main()
{
    int a , b ;

    a = b = 0;

    printf("Enter A Value : ");
    scanf("%d",&a);

    printf("Enter B Value : ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n A : %d \n",a);
    printf("\n B : %d \n",b);
}
