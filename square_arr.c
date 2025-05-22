#include<stdio.h>
int main() {
    int arr[100],n,i;

    printf("Enter number : ");
    scanf("%d",&n);
    printf("Enter elements :\n");

    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Sqaures of arr : ");
    for(i=0;i<n;i++) {
        printf("%d^2 : %d\n",arr[i],arr[i]*arr[i]);
    }
    return 0;
}