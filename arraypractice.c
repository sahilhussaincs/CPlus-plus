#include <stdio.h>

int main()

{

    int age[5];
    int i;
    printf("Enter ages\n");

    for(i=0; i<5; i++)
    {
        scanf("%d",age[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d",age[i]);
    }

    return 0;


}