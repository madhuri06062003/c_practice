#include<stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6};
    int i;
    int length =0;
    
    for(i=0;i<length/2;i++) {
        int temp=arr[i];
        arr[i]=arr[length-i-1];
        arr[length-i-1]=temp;
    }
    for(i=0;i<length;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}