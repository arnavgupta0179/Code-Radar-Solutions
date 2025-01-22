#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        print("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}