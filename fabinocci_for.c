#include <stdio.h>
int main() {
    int n,i;
    int first=0,second=1,next;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Fabonacci deries %d",n);
    for (i=0;i<=n;i++) {
        printf("%d",first);
        next = first+second;
        first = second;
        second = next;
    }
    return 0;
}