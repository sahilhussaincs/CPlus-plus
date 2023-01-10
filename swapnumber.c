#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;

    printf("Enter Value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swaping a=: %d b=%d",a,b);
    getch();
}