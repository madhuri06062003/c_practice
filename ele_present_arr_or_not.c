#include<stdio.h>
int main() {
    int i,n;
    int arr[100],found=0,key;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Search element");
    scanf("%d",&key);

    for(i=0;i<n;i++) {
        if(arr[i]==key) {
            found =1;
            printf("Element %d \n",key);
            break;
        }
    }
    if (!found) {
        printf("Element %d\n",key);
    }
}