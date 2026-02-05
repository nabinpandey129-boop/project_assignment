#include  <stdio.h>
int main()
{
  int length, breadth;
  float area;
  float perimeter;
//taking the non negative  value of input from the user
  printf("Enter the length:");
  scanf("%d", &length);
  printf("Enter the breadth:");
  scanf("%d", &breadth);  

  //calculating area 
  area = length * breadth;
  //calculating perimeter
  perimeter = 2 * (length + breadth);
  //displaying the area 
  //  %  start signal
  // . precision specifier
  // 2 number of digits after the decimal point
  // f type specifier for float
  printf("Area = %.2fm^2\n", area);
  //displaying the perimeter
  printf("Perimeter = %.2fm\n", perimeter);
  return 0;
}