#include<stdio.h>
int main() {
    int i,n,evencount =0,oddcount =0;
    int arr[10];

    printf("Enter elements : ");
    scanf("%d",&n);
    printf("Enter elements : ");

    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);

        if(arr[i]%2==0) {
            evencount++;
        } else {
            oddcount++;
        }
    }
    printf("even number : %d\n",evencount);
    printf("odd number : %d\n",oddcount);
    printf("\n");
    return 0;
}