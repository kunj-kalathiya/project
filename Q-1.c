// program to calculate simple intrest

#include<stdio.h>

int main()
{
    int p,r,t;
    
    printf("enter principal value=");
    scanf("%d",&p);
    
    printf("enter rate=");
    scanf("%d",&r);
    
    printf("enter time=");
    scanf("%d",&t);
    
    printf("simpl interest=%d",(p*r*t)/100);
}