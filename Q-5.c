

#include <stdio.h>
int main()
{
    int a,b;
    
    printf("enter a=");
    scanf("%d",&a);
    
    printf("enter b=");
    scanf("%d",&b);

    int c;
    c=a;
    a=b;
    b=c;
    
    printf("after swapping a=%d b=%d",a,b);
    return 0;

    
    
}