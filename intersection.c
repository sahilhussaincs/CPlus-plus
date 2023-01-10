#include <stdio.h>

int main()
{
    int A[10], B[10], uni[20], n1,n2;
    
    printf("Enter size of set A n1:");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    
    printf("Enter size of Set B n2: ");
    scanf("%d",&n2);
    for(int j=0;j<n2;j++)
    {
        scanf("%d", &B[j]);
    }
    
   //copy elements of A in Union set
    for(int i=0;i<n1;i++)
    {
        uni[i]=A[i];
    }
   
   //copy elements of Set B in union set
   for(int j=0;j<n2;j++)
   {
       uni[n1+j]=B[j];
   }
   
   //Check dublicacy 
   for(int i=0;i<n1+n2;i++)
   {
       int k=0; //k decide elements is going to print or not
       
       for(int j=i+1;j<n1+n2;j++)
       {
           if(uni[i]==uni[j])
           {
               k=1;
               printf("%d",uni[i]); //For intersection
            
           }
       }
       
          if(k==0)
          break;
   }
  
    return 0;
}