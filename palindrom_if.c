#include <stdio.h>
int main() {
    int num,originalnum,reversednum=0,remainder;

    printf("Enter number : ");
    scanf("%d",&num);

    originalnum=num;
    while (num!=0) {
        remainder =num%10;
        reversednum=reversednum*10+remainder;
        num=num/10;
    }

    if(originalnum==reversednum) {
        printf("%d is pakindrom\n",originalnum);
    } else {
        printf("%d is not palindrom\n",originalnum);
    }
    return 0;
}