#include <stdio.h>

int main() {
  printf("Enter the first no: ");
  float x;//Declaration
  scanf("%f",&x);//initalisation by user
  
  printf("Enter the second no: ");
  float y;
  scanf("%f",&y);
  
  printf("\nChoose (+,_,*,/) to continue:\n");
  char i;
  scanf("%c",&i);

  if (i=="+") printf("\nAddition%f:",x+y);
  if (i=="-") printf("\nSubstraction%f:",x-y);
  if (i=="*") printf("\nMultiplication%f:",x*y);
  if (i=="/") printf("\nDivision:%f",x/y);
  return 0;
}