#include  <stdio.h>
int main()
{
  float a, b, c, d, x, y;
  printf("enter three numbers: ");
  scanf("%f %f %f", &a, &b, &c);
  d = (b * b) - (4 * a * c);
  if (d > 0)
  {
    x = (-b + sqrt(d)) / (2 * a);
    y = (-b - sqrt(d)) / (2 * a);
    printf("roots are real and different: %f and %f\n", x, y);
  }
  else if (d == 0)
  {
    x = -b / (2 * a);
    printf("root are real and equal\n");
    printf("x:%f\n", x);
  }
  else
  {
    printf("roots are imaginary\n");
  }
  return 0;
}