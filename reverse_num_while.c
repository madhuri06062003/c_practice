#include <stdio.h>
int main() {
    int n,reverse =0,digit;

    printf("Enter number : ");
    scanf("%d",&n);

    while(n!=0) {
        digit = n%10;
        reverse = reverse*10+digit;
        n=n/10;
    }
    printf("Reverse number %d : %d\n",n,reverse);
    return 0;
}