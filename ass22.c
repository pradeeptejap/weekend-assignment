#include <stdio.h>
main()
{
    int age = 0;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age >= 18)
        printf("\n Congratulations! \"YOUR ELIGIBLE\" for casting your vote....\n\n");
    else
        printf("\n Oops! \"YOUR TOO YOUNG\" to vote....\n\n");
}

