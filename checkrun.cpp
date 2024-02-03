#include <stdio.h>

int main(){
    //declaring the array of type int and size 2
    int a[2]= {1,5};                         
    
    //declaring the array of type char and size 3
    char b[3]= {'a', 'b', 'c'};              
    
    //declaring the array of type float and size 5
    float c[5] = {0.2, 0.7, 0.8, 0.21, 0.9}; 
    
    //accessing the first element of array a
    printf ("%d", a[0]);                     
    
    //accessing the elements of array b
    for (int i=0; i<2;i++){                  
        printf("%c\n", b[i]);
    }  
    printf("%f", c[4]);
}
