#include<stdio.h>
int main(){
    int len, breadth;
    printf("enter the value: ");

    scanf("%d",&len);
    scanf("%d",&breadth);
    
    int area = (len*breadth);
    int perimeter = 2*(len+breadth);

    if (area > perimeter){
        printf("area is greater");
    }
    else
    printf("perimeter is  greater");

    return 0;
}