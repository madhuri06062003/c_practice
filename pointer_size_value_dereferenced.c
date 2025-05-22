#include<stdio.h>
int main() {
    int a =10;
    float b = 5.5;
    char c = 'A';
    double d = 23.45;

    int *intptr = &a;
    float *floatptr = &b;
    char *charptr = &c;
    double *doubleptr = &d;

    printf("Size of int : %zu\n",sizeof(intptr));
    printf("Size of float : %zu\n",sizeof(floatptr));
    printf("Size of char : %zu\n",sizeof(floatptr));
    printf("Size of double : %zu\n",sizeof(doubleptr));

    printf("Size of value int %zu\n",sizeof(*intptr));
    printf("Size of value float %zu\n",sizeof(*floatptr));
    printf("Size of value char %zu\n",sizeof(*charptr));
    printf("Size of value double %zu\n",sizeof(*doubleptr));

    return 0;
    
}