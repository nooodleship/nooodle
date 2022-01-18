#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    long int t1,t2,i,j,x;  
    scanf("%ld %ld",&t1,&t2);  
    for(i=1;i<=t1 && i<=t2;i++ ){  
        if(t1%i==0 && t2%i==0){  
            x = i;  
        }  
    }  
    printf("%ld\n",x);  
}