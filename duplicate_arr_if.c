#include <stdio.h>
int main() {
    int arr[100],newarr[100];
    int n,i,j,k=0;
    int isduplicate;

    printf("Enter no of ele in arrays : ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);

        for(i=0;i<n;i++) {
            isduplicate =0;

            for(j=0;j<k;j++) {
                if(arr[i]==newarr[j]) {
                    isduplicate=1;
                    break;
                }
            }
            if(isduplicate ==0) {
                newarr[k]=arr[i];
                k++;
            }
        }
        printf("Array after removing duplicates : ");
        for(i=0;i<k;i++) {
            printf("%d",newarr[i]);
        }
        printf("\n");
        return 0;
    }
}