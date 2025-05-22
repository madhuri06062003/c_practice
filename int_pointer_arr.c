#include<stdio.h>
int main() {
    int arr[]={10,20,30,40,50};
    int a =56;

    int *ptr=arr;
    int(*p)[5]=&arr;
    int i;

    printf("Value of int : a%d\n",a);
    printf("Add of int : %p\n",(void*)&a);
    
    printf("Arr element \n");
    for(i=0;i<5;i++) {
        printf("ptr[%d] = %d address %p\n",i,ptr[i],(void*)(ptr+i));
    }
    printf("Adress store %p\n",(void*)ptr);
    printf("size of ptr int %zu\n",sizeof(ptr));
    printf("Arr elements using p\n");

    for(i=0;i<5;i++) {
        printf("(*p)[%d] = %d address %p\n",i,(*p)[i],(void*)&((*p)[i]));
    }
    printf("Addres store :%p\n",(void*)p);
    printf("Size of *p %zu :\n",sizeof(p));

    return 0;
}