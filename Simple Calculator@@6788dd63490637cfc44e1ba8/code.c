#include <stdio.h>
int main() {
    char operator;
    int x, y, result;
    scanf("%d %d", &x, &y);
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = x + y;  
            break;
        case '-':
            result = x - y;  
            break;
        case '/':
            if (y != 0) {    
                result = x / y;  
            } else {
                printf("error\n");
                return 1;  
            }
            break;
        case '*':
            result = x * y;  
            break;
        default:
            printf("Invalid operator\n");
            return 1;  
    }
    printf("%d\n", result);
    return 0;
}