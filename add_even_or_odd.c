#include<stdio.h>
int main() {
    int num1,num2,sum;
    int i;
    printf("Enter num1 :");
    scanf("%d",&num1);
    printf("Enter num2 :\n");
    scanf("%d",&num2);

    sum = num1+num2;
    printf("Enter sum of numbers%d\n",sum);

    if(sum%2==0) {
        printf("Even number");
    }else {
        printf("odd number");
    }
    return 0;
}