#include<stdio.h>
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    if (num < 99 && num > 999) {
        printf(" num is three  digit number");
    }
    else
    {
        printf("num is not three digit number");
    }

    return 0;
}