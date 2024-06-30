#include<stdio.h>
int main () {
    int radius;
    printf("..........");
    scanf("%d",&radius);
    printf("the voolume entered is ");

    float volume = 4/3 * 3.14* radius * radius;

    printf("the volume is: %f",volume);

    return 0;
}