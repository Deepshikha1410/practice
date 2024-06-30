//calculate sum of first n natutal number
#include<stdio.h>
int main() {
    int num,i,sum=0;
    printf("enter the value of num: ");
    scanf("%d",&num);
    for(int i =1; i <=num; ++i)
    {
        sum += i;
    }
    printf("The  sum of naturla number is: %d\n",sum);

    return 0;
}