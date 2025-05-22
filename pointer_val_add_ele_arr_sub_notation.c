#include<stdio.h>
int main() {
    int arr[]={10,20,30,40,50};
    int *ptr=arr;
    int i;

    printf("Val and add of ele \n");
    printf("Using pointer notation :\n");
    for(i=0;i<5;i++) {
        printf("Element %d : %d\n",i,*(ptr+i));
    }
    printf("Using subscript notation \n");
    for(i=0;i<5;i++) {
        printf("Element %d: %d\n",i,ptr[i]);
    }
    return 0;
}