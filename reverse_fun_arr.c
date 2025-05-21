#include<stdio.h>
void reversearr(int arr[],int n){
int start =0,end = n-1,temp;

while(start <end) {
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    start++;
    end--;

}
}
int main() {
    int arr[10],i,n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Enter element : ");

    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Reverse array\n");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}