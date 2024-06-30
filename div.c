#include<stdio.h>
int main(){
    float a , b ;
    printf("enter the value of a: \n");
    scanf("%f",&a);
    printf("enter the value of b: \n");
    scanf("%f",&b);
    int q = a /b;
    int r = a - b*q;
    printf("%d",r);

    return 0;
}