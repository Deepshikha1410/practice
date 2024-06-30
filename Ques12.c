#include<stdio.h>
int main(){
    int num ;
    printf("enter the num : ");
    scanf("%d",&num);

    if(num%5==0 || num%3==0) {
        printf("num is divisible by only one");
    }
    else
    {
        printf("num is divisible byboth");
    }
    

    return  0;
}