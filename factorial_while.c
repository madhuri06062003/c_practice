#include<stdio.h>
int main() {
    int i=0,factorial=1;
    int num;

    printf("Enter the integer : ");
    scanf("%d",&num);

    while(i<=num) {
        factorial = factorial *i;
        i++;
    }
    printf("Factorial number %d : %llu\n",num,factorial);
    return 0;
}