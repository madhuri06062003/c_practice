#include <stdio.h>
int main() {
    int i,num;

    printf("Enter number : ");
    scanf("%d",&num);
    printf("MUl %d\n",num);
    for(i=0;i<=20;i++) {
        printf("%d * %d = %d\n",i,num,num*i);
    }
    return 0;

}