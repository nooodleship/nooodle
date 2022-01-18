#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    long int t1 = 1;  
    int i,n;  
    scanf("%d",&n);  
  
    for(i=2;i<=n;i++){  
        t1 *= i;  
    }  
    printf("%ld\n",t1);  
}  