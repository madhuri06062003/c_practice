#include<stdio.h>
void swap_num(int *a,int *b);

int main() {
    int a=10;
    int b=20;
    swap_num(&a,&b);

    printf("Swap a & b:%d %d\n",a,b);
    return 0;
}
void swap_num(int *a,int *b) {
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}