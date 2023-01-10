#include <stdio.h>
#include <conio.h>

void main()
{
    int i,no;
    printf("Enter Any Number:");
    scanf("%d",&no);
    if(no==1)
    {
    printf("smallest Prime no. is 2");

    }
    for(i=2;i<no;i++)
    {   
    
    if(no%i==0)
    printf("Not prime Number");
    break;
    }
    if(no==i)
    {
    printf("prime no.");

    }
    getch();
}