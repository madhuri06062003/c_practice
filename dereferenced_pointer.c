#include<stdio.h>
int main() {
    int a=10;
    int *ptr;
    ptr =&a;

    printf("Enter value of a :%d\n",a);
    printf("Adress of a: %p\n",(void*)&a);
    printf("Value of ptr :%p\n",(void*)ptr);
    printf("Value of(*ptr) %d\n",*ptr);

    *ptr=20;
    printf("After modifying :\n");
    printf("Value of a: %d\n",a);
    printf("Value of *ptr :%d\n",*ptr);

    return 0;
    
}