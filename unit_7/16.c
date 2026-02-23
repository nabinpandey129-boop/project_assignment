//area of circle 
#include <stdio.h>
 float area;
void circlearea(float area)  
{  
    float r;  
    printf("Enter the radius of the circle: ");  
    scanf("%f", &r);  
    area = 3.14 * r * r; 
    printf("Area of the circle: %.2f\n", area); 
}   

int main()  
{
   
    circlearea(area);    
    return 0;  
}