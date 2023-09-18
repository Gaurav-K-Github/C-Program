#include <stdio.h>
int main(){
    printf("Enter the Base length:");
    float b;
    scanf("%f",&b);
    printf("\nEnter the Height length:");
    float h;
    scanf("%f",&h);
    printf("\nArea of the triangle: %f",0.5*b*h);
    printf("\nCircumference of the triangle: %f",3*b);
    return 0;
}