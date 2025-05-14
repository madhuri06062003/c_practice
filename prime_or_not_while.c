#include <stdio.h>
int main() {
    int num,i=2,isprime =1;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num<=1) {
        printf("%d is not prime",num);
    }
    while (i<=num/2) {
        if(num%i==0) {
            isprime=0;
            break;
        }
    } i++;
    if(isprime) {
        printf("Prime");
    } else {
        printf("Not prime");
    }
    return 0;
}