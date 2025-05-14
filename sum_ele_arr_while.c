#include<stdio.h>
int main () {
    int arr[100],i=0,n,sum=0;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter %d elements :\n",n);
    while(i<n) {
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i<n) {
        sum =sum+arr[i];
        i++;
    }
    printf("Sum of ele%d\n : ",sum);
    return 0;
}