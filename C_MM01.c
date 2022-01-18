view plainprint?
#include <stdio.h>      
      
int main(){      
    double a,u,d,h;  
    scanf("%lf %lf %lf",&u,&d,&h);    
    a = (u+d)*h/2;      
    printf("Trapezoid area:%.1lf\n",a);      
}  