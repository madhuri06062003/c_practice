#include <stdio.h>
int main() {
    int a =42;
    int *ptr;
    ptr =&a;
    printf("Value of pointer :%d\n",*ptr);

    return 0;
    
}