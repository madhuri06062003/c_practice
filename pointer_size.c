#include<stdio.h>
int main() {
    int *intptr;
    float *floatptr;
    char *charptr;
    double *doubleptr;

    printf("Size of int %zu\n:",sizeof(intptr));
    printf("Size of float %zu\n :",sizeof(floatptr));
    printf("Size of char %zu\n:",sizeof(charptr));
    printf("size of double %zu\n :",sizeof(doubleptr));

    return 0;
}