#include<stdio.h>
int main() {
    int arr[]={10,20,30,40,50};
    int *ptr=arr;
    printf("Initial pointer address : %p,value :%d\n",(void*)ptr,*ptr);

    printf("Postfix inc(ptr++)\n");
    printf("Value before inc %d\n",*ptr);
    ptr++;
    printf("Value after inc %d\n",*ptr);

    printf("Prefix inc(++ptr)\n");
    printf("Value before inc %d\n",*ptr);
    ++ptr;
    printf("Value after inc %d\n",*ptr);

    printf("Postfix dec(ptr--)\n");
    printf("Value before dec %d\n",*ptr);
    ptr--;
    printf("Value after dec %d\n",*ptr);

    printf("Prefix dec(--ptr)\n");
    printf("Value before dec %d\n",*ptr);
    --ptr;
    printf("Value after dec %d\n",*ptr);

    return 0;
    
}