#include <stdio.h>
#include<math.h>
int main() {
    int num;
    scanf("%d",&num);
    int msb = (int)log2(num);
    if(msb==1){
        printf("Set");
    }
    else{
        printf("Not set");
    }
    return 0;
}