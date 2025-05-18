#include<stdio.h>
int main() {
    int largest,secondlar;
    int arr[100],n,i;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[i]) {
        largest =arr[0];
        secondlar=arr[1];
    } else {
        largest =arr[1];
        secondlar=arr[0];
    }
    for(i=2;i<n;i++) {
        if(arr[i]>largest) {
            secondlar=largest;
            largest=arr[i];
        } else if(arr[i]>secondlar && arr[i]!=largest) {
            secondlar=arr[i];
        }
    }
    if(largest==secondlar) {
        printf("no 2nd larg \n");
    } else {
        printf("2nd larg :%d\n",secondlar);
    }
    return 0;
}