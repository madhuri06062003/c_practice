#include <stdio.h>
int main() {
    int a =42; //declare int variable 
    int *ptr; //declare pointer variable
    ptr =&a; //assign add variable to pointer
    printf("Value of pointer :%d\n",*ptr);

    return 0;

}