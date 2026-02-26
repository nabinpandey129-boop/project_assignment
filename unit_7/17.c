
#include<stdio.h>

int Prime(int n){
if(n<=1)
return 0;

for(int i=2;i<n;i++){
    if(n%i==0)
    return 0;
    else{ 
        return 1;
    }
}


}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if (Prime(num))
        printf("%d\n", 1);
    else
        printf("%d\n", 0);

    return 0;
}