#include <stdio.h>
int main() {
    int arr[100],i,n,max;

    printf("Enter number ");
    scanf("%d",&n);

    printf("Enter elements %d \n",n);
    for(i=0;i<n;i++) {
       
        scanf("%d",&arr[i]);
    }
    max = arr[0];

for(i=1;i<n;i++) {
    if(arr[i]>max) {
        max = arr[i];
    }
}
printf("Max number %d\n",max);
return 0;
}