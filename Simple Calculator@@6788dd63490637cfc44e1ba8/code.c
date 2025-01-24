#include <stdio.h>
int main() {
    char operator;
    int x,y,result;
    scanf("%f %f %c",&x,&y,&operator);
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
    printf("%f",result);
    return 0;
}