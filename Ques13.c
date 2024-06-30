#include<stdio.h>
int main(){
    int a, b, c,d;
    printf("enter : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    if(a > b && a > c && a > d) {
        printf("a");
    }
    else if (b > c && b > a && b > d)
    {
        printf("b");
    }
    else if(c > a && c >b && c>d)
    {
        printf("c");
    }
    else {
        printf("d");
    }
    

    return 0;
}