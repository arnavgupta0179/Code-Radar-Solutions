#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u", &num);
    if (num == 0) {
        printf("Not set\n");  
    } else {
        unsigned int msb = 1 << (sizeof(num) * 8 - 1);
        if (num & msb) {
            printf("SET\n");
        } else {
            printf("Not set\n");
        }
    }
    return 0;
}