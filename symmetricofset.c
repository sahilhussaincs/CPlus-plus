#include <stdio.h>
int main()

{
    int a[50],b[50],c[50], f1=0;
    int i, j , n, m, k;
    printf("Enter the Number of Elements in First Set:\n");
    scanf("%d",&n);
    printf("Enter the Elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element of First Set\n");
    return 0;
}