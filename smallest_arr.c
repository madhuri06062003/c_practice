#include<stdio.h>
int main () {
    int arr[100],i,min,n;

    printf("Enter a number");
    scanf("%d",&n);

    printf("Enter elements %d\n",n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]<min) {
            min =arr[i];
        }
    }
    printf("Min number %d\n",min);
    return 0;
    
}