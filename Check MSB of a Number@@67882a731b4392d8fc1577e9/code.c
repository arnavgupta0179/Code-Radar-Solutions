#include <stdio.h>
#include<math.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num>0 && (num & (num-1))==0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}