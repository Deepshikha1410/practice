#include<stdio.h>
float volumeofcircle(float radius){

    return (4/3 * 3.14 * radius * radius);
}

int main() { 
    float radius;
    printf("volume value: ");
    scanf("%f", &radius);

    float c = volumeofcircle(radius);

    printf(".......%f",c);
}