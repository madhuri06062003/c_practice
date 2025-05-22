#include<stdio.h>
int main() {
    int arr[]={10,20,30,40,50};
    int i;
    int *ptr=arr;

    printf("Arr arithemstic : \n");
    for(i=0;i<5;i++) {
        printf("Element %d:%d(address:%p)\n",i,*(ptr+i),(void*)(ptr+i));
        printf("Demonstrting pointrer inc : \n");
        printf("Value of ptr : %d\n",*ptr);
        ptr++;
        printf("After ptr++ :%d\n",*ptr);

        ptr=ptr+2;
        printf("After ptr = ptr+2 value ptr : %d\n",*ptr);
        return 0;

    }
}