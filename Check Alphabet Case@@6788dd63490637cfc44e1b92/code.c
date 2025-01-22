#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase");
    }
    else if(islower(ch)){
        printf("Lowercase");
    }
    return 0;
}
