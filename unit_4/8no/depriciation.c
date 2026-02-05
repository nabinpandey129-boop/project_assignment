#include<stdio.h>
int main() {
    float o_v, r, d_v;

    printf("Enter original value: ");
    scanf("%f", &o_v);

    printf("Enter depreciation rate: ");
    scanf("%f", &r);

    //calculating deprciated value using formula
    d_v = o_v * (1 - r/100);

    printf("Depreciated value = %.2f", d_v);

    return 0;
}