#include <stdio.h>
int main() {
    char operator;
    int x,y,result;
    scanf("%d %d %c",&x,&y,&operator);
    switch(operator){
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '/':
            result = x/y;
            break;
        case '*':
            result = x*y;
            break;
    }
    printf("%d",result);
    return 0;
}