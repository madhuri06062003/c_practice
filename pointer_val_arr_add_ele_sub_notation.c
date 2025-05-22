#include<stdio.h>
int main() {
    int arr[]={10,20,30,40,50};
    int *ptr=arr;
    int i;

    printf("Value and add of ele in arr \n");
    printf("Using subscript notation :\n");
    for(i=0;i<5;i++) {
        printf("Element %d%d:%p\n",i,ptr[i],(void*)&ptr[i]);
    }
    return 0;
}