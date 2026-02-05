#include <stdio.h>
int main() 
{
  int p, t, r;
  float si;
  printf("Enter principal, time and rate:\n");
  scanf("%d %d %d", &p, &t, &r);  
  si = (p * t * r) / 100.0;
  printf("Simple Interest = %.2f\n", si);
  return 0;
}