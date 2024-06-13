#include<stdio.h>
float milesperseconds(float kmph){

    return(kmph * 0.67);
}

int main(){
    float kmph;
    printf("enter the value: ");
    scanf("%f",&kmph);

    float c = milesperseconds (kmph);
    printf("entered vallue is %f",c);

    milesperseconds(kmph);

}