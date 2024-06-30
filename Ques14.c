#include<stdio.h>
int main() {
    int a, b,c;
    printf("enter: ");
    scanf("%d%d%d",&a,&b,&c);

    int sum = a+b+c;
    if(sum == 180) {
        printf("triangle");
    }
    else {
        printf("not a traiangle");
    }

    return  0;
}