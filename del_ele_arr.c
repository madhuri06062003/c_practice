#include<stdio.h>
void deletearr(int arr[],int *n,int position) {
    if(position <0 || position>=*n) {
        printf("Invalid position");
        return;

    }   
    for(int i=position;i<*n-1;i++) {
        arr[i]=arr[i+1];
    } 
    (*n)--;
}
int main() {
    int arr[10],n,i,position;
    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter element : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("delete position : ");
    scanf("%d",&position);

    deletearr(arr,&n,position);
    printf("Arr after deletion");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}