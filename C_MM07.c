#include<stdio.h>  
  
int main()  
{  
    int a;  
    long int b;  
    scanf("%d",&a);  
    b = a;  
  
    printf("%ld ",b);  
    b *= a;  
    printf("%ld ",b);  
    b *= a;  
    printf("%ld\n",b);  
}  