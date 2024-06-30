#include<stdio.h>
int main() {
    float p, r, t;
    printf("enter");
    scanf("%f%f%f",&p,&r,&t);
    
    float SI = (p*r*t)/100;
    printf("the value is: %f",SI);
    return 0;
}