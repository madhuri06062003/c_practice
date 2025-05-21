#include<stdio.h>
int main() {
    int n,i;
    int arr[100],freq[100]={0};
    printf("Enter value :");
    scanf("%d",&n);

    printf("Enter elememts : ");
    for(i=0;i<n+2;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Repeating number : ");
    for(i=0;i<n+2;i++) {
        freq[arr[i]]++;
        if(freq[arr[i]]==2) {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}