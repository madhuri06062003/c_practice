#include<stdio.h>
int main() {
    int n,i;
    char arr[10];

    printf("Enter char : ");
    scanf("%d",&n);
    printf("Enter element : ");

    for(i=0;i<n;i++) {
        scanf("%c",&arr[i]);
    }
    printf("Ascii value ");
    for(i=0;i<n;i++) {
        printf("Ascii :%c  %d\n",arr[i], arr[i]);
    }
    return 0;
}