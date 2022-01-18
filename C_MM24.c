#include<stdio.h>    
#include<math.h>    
    
int main()    
{    
    int r,p2;    
    float f;  
    while(scanf("%d %d",&p2,&r)!=EOF){  
        f=0;  
        if(p2>120){    
            f += (p2 - 120)*r*1.66;   
            p2 = 120;    
        }    
        if(p2>60){    
            f += (p2 - 60)*r*1.33;  
            p2 = 60;    
        }    
        f += p2*r;    
        printf("%.1f\n",f);  
    }  
        
}