#include <stdio.h>
int main(){
    printf("Enter the radius:");
    float r;
    scanf("%f",&r);
    printf("Area of the circle: %f",3.14*r*r);
    printf("\nCircumference of the circle: %f",2*3.14*r);
    return 0;
}