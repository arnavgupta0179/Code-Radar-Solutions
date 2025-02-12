#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u", &num);
    int lowestBit = num & 1;
    if (lowestBit == 1) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    return 0;
}
