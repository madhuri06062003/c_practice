#include<stdio.h>
int main() {
    int num,digit,sum=0;
    printf("Enter number : ");
    scanf("%d",&num);

    while(num>0) {
        digit=num%10;
        sum = sum +digit;
        num =num/10;

    }
    printf("Sum of digit %d = %d\n",num ,sum);
    return 0;
}