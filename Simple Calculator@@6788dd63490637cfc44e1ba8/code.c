#include <stdio.h>
int main() {
    char operator;
    int x,y,result;
    scanf("%lf %lf",&x,&y);
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
    printf("%.2lf",result);
    return 0;
}