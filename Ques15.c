#include<stdio.h>
int main() {
    int ram,shyam,ajay;
    printf("enter the age: ");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    
    if(ram <shyam && ram < ajay) {
        printf("ram is younger");
    }
    else if (shyam < ram && shyam <ram)
    {
        printf("shyam");
    }
    else
    {
        printf("ajay");
    }
    
    return 0;
}