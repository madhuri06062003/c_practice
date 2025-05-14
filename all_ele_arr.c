#include<stdio.h>
int main() {
    int arr[100],i,n;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter element %d: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements in an array \n");
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}