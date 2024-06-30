#include<stdio.h>
int main() {
    int num;
    printf("enter : ");
    scanf("%d",&num);

    if(num%5==0 && num%3==0){
        printf("the num is divisible by both");
    }
    else
    {
        printf("num is not divisble");
    }

    return 0;
}