#include <stdio.h>
int main() {
    int i;
    printf("Enter number : ");
    scanf("%d",&i);
    if(i%2==0) {
        printf("Even number");
    } else {
        printf("Odd number");
    }
    return 0;
}