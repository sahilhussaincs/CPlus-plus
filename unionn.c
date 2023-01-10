#include <stdio.h>
int main()

{
    int a[5], b[5],uni[10], i,j,k,m;
    printf("Enter the Elements of Set A:\n");
    for(i=0; i<5; i++)
    {
       scanf("%d",&a[i]);
      // printf(" %d " ,a[i]);
    }

    printf("Enter the Elements of Set B\n");
    for(j=0; j<5; j++)
    {
       scanf("%d",&b[j]);
       //printf(" %d ",b[j]);
    }
     
     for(i=0; i<5; i++)
     {
        uni[k]=a[i];
        k++;
       // printf(" %d ",uni[10]);
    } 
    for(j=0;j<5;j++)
    {
        uni[k]=b[j];
        k++;
    }

    printf("Union of A and B");
     for(i=0;i<k;i++)
     {
          printf("%d",uni[k]);
     }

     
  return 0;
}