// program for calculate time takes to revolve earth in diffrent unit
// given period= 31558150 sec

#include<stdio.h>

int main(){
    float sec=31558150;
    printf("period in sec=31558150\n");
    printf("period in min=%f\n",sec/60);
    
    printf("period in hours=%f\n",sec/3600);
    
    printf("period in day=%f\n",sec/216000);
    
}