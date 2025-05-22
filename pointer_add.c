#include<stdio.h>
int main () {
    int a=10;
    float b = 5.5;
    char c ='A';

    printf("Enter value a : %d\n",a);
    printf("Adress of a: %p\n", (void*)&a);
    printf("Value b :%f\n",b);
    printf("Address b: %p\n", (void*)&b);
    printf("Value c : %c\n",c);
    printf("Adress c: %p\n", (void*)&c);

    return 0;
}