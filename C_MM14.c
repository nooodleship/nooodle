#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    long int s,m,h,d;  
    scanf("%ld",&s);  
    d = s/86400;  
    s %= 86400;  
    printf("%ld days\n",d);  
    h = s/3600;  
    s %= 3600;  
    printf("%ld hours\n",h);  
    m = s/60;  
    s %= 60;  
    printf("%ld minutes\n",m);  
    printf("%ld seconds\n",s);  
  
      
}  