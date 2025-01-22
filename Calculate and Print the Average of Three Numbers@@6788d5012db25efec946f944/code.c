#include<stdio.h>
int main(){
    float x,y,z;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    float average = (x+y+z)/3;
    printf("Average: %.2f",average);
}