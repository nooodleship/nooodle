#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int i;  
    double s;  
    long int r;  
    scanf("%d",&i);  
    s = i/0.238;  
    r = i/0.238;  
    if(s - r!=0){  
        if(s - r < 0.5){  
            s += 1;  
        }  
    }  
    printf("%.0lf\n",s);  
      
}