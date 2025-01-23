#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("Out of Range");
    }
    else if(num<100 && num>0){
        printf("In Range");
    }
    return 0;
}