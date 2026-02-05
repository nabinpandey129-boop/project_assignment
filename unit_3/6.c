#include<stdio.h>

int main()
{
  int i;
  int n = 5;
  int total = 0;   
  int marks[5];
float percentage;
  for (i = 0; i < n; i++) // Start at 0, end before 5
  {
    // We use i+1 only for the display so the user sees "Subject 1"
    printf("Marks of subject %d: ", i + 1);
    scanf("%d", &marks[i]);
  }
  
  for (i = 0; i < n; i++)
  {
   
    total = total + marks[i];
  }

  printf("\n\n\nTotal marks: %d\n", total);
  // percentage calculation

  percentage = (total / (float)(n * 100)) * 100;
  printf("Percentage: %.2f%%\n", percentage); 
  
  return 0;
}  