#include <stdio.h>
#include <conio.h>

void main()
{
    int no;

    printf("Enter Any Number\n");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    getch();

}