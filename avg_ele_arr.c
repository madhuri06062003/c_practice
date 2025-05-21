#include<stdio.h>

float calculateavg(int arr[],int n) {
    int sum =0;
    int i;
    for(i=0;i<n;i++) {
        sum = sum +arr[i];
    }

        return (float)sum/n;
    }

int main() {
    int arr[100],n,i;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    float avg=calculateavg(arr,n);
    printf("Average srr element %f\n",avg);
    return 0;
}
