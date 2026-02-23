#include<stdio.h>
int sumNumber(int *num1, int *num2){
    int sum= *num1+*num2;
    printf("The sum of numbers is %d\n",sum);
    return sum;
}
int diffNumber(int *num1, int *num2){
    int diff= *num1-*num2;
    printf("The difference of numbers is %d\n",diff);
    return diff;
}
int productNumber(int *num1, int *num2){
    int product= (*num1)*(*num2);
    printf("The product of numbers is %d\n",product);
    return product;
}
int main(){
    
    int num1=10;
    int num2=5;
    sumNumber(&num1, &num2);
    diffNumber(&num1, &num2);
    productNumber(&num1, &num2);
    return 0;
}