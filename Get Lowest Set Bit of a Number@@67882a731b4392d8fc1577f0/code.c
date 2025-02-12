#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u", &num);
    unsigned int lowestSetBit = num & -num;
    printf("%u\n",lowestSetBit);
    return 0;
}