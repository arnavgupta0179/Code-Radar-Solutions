#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    int binary[32];
    int index = 0;
    while (num > 0) {
        binary[index++] = num % 2;
        num = num / 2;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}