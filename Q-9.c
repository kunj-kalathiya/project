// prgram to read time in hr,min,sec and convert it into total second

#include<stdio.h>

int main(){
    int hr, min,sec;
    printf("hours=");
    scanf("%d",&hr);
    
    printf("minutes=");
    scanf("%d",&min);
    
    printf("second=");
    scanf("%d",&sec);
    
    printf("total second=%d",sec+min*60+hr*3600);
    return 0;
}