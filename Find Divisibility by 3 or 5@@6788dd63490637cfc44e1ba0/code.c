#include <stdio.h>
int mani(){
    int a;
    scanf("%d %d",&a);
    if(a%5==0 && a%3==0){
        printf("Divisible by both");
    }
    else if(a%5==0){
        printf("Divisible by 5");
    }
    else if(a%3==0){
        printf("Divisible by 3");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}