// program to read five subject marks print division of student
#include <stdio.h>

int main(){
    int a,b,c,d,e;
    float per;
    
    printf("Enter marks of first subjects: ");
    scanf("%d", &a);

    printf("Enter marks of second subjects: ");
    scanf("%d", &b);  

    printf("Enter marks of third subjects: ");
    scanf("%d", &c);

    printf("Enter marks of fourth subjects: ");
    scanf("%d", &d);
    
    printf("Enter marks of fifth subjects: ");
    scanf("%d", &e);

    per = (a+b+c+d+e)/5;
    if(per>=60){
        printf("First division");
    }
    else if(per>=50){
        printf("Second division");
    }
    else if(per>=40){
        printf("Third division");
    }
    else{
        printf("Fail");
    }
    return 0;

}