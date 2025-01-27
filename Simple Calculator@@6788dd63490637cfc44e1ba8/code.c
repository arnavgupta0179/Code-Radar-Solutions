#include <stdio.h>
int main() {
    char operator;
    int x,y,result;
    scanf("%f %f",&x,&y);
    scanf("%c",&operator);
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
    printf("%.2f",result);
    return 0;
}