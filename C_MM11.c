#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int i;  
    scanf("%d",&i);  
    printf("NT10=%d\n",i/10);  
    i %= 10;  
    printf("NT5=%d\n",i/5);  
    i %= 5;  
    printf("NT1=%d\n",i);  
}  