#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x & 1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}