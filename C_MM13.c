#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int t1,t2,t3,t4,p1,p2,f;  
    scanf("%d %d",&t1,&t2);  
    scanf("%d %d",&t3,&t4);  
    f = 0;  
    p1 = 60 * t1 + t2;  
    p2 = 60 * t3 + t4;  
    p2 -= p1;  
    if(p2>240){  
        f += (p2 - 240)/30*60;  
        p2 = 240;  
    }  
    if(p2>120){  
        f += (p2 - 120)/30*40;  
        p2 = 120;  
    }  
    f += p2/30*30;  
    printf("%d\n",f);  
      
}