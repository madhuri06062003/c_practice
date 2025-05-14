#include<stdio.h>
int main() {
    int num,i;
    unsigned long long factorial =1;

    printf("Enter a positive integer : ");
    scanf("%d",&num);

        for (i=1;i<=num;i++) {
            factorial *=1;
        }
        printf("Factorial of %d : %llu\n",num,factorial);
    return 0;
}