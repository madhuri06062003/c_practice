#include<stdio.h>
int main() {
    int n,sum=0,total,i;
    int arr[100];

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter %d elements : ", n-1);
    for(i=0;i<n-1;i++) {
        scanf("%d",&arr[i]);
        sum = sum +arr[i];
    }
    total = n*(n+1)/2;
    int missing = total-sum;
    printf("missing : %d\n",missing);
    return 0;
}