#include<stdio.h>
int main() {
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    
    if (num < 0){
    num = num * (-1);
    }
    printf("the number is: %d",num);

    return 0;
    
}