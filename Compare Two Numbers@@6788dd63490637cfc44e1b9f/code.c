#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y){
        printf("Equal");
    }
    else if(x>y){
        printf("First");
    }
    else{
        printf("Second");
    }
    return 0;
}