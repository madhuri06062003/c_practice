#include <stdio.h>
int main() {
    int a,b,temp;

    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);

    while(b!=0) {
        temp =b;
        b=a%b;
        a=temp;
    }

    return 0;
}