#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int square = y*y;
    if(square==x){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}