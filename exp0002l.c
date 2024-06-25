#include <stdio.h>
#include <stdlib.h>
main()
{
    char name[20];
    int r = 0,c;

    printf("Enter A Name : ");
    scanf("%s",&name);

    r = strlen(name);

    while (c<r)
    {
        printf("\t %s",name);
        c++;
    }
}

