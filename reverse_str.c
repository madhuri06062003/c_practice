/*#include<stdio.h> //arr
int main() {
    int arr[]={1,2,3,4,5,6};
    int i;
    int length =sizeof(arr)/sizeof(arr[0]);
    
    for(i=0;i<length/2;i++) {
        int temp=arr[i];
        arr[i]=arr[length-i-1];
        arr[length-i-1]=temp;
    }
    for(i=0;i<length;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}*/

//str
#include<stdio.h>
#include<string.h>
int main() {
    char str[]="Hello";
    int i;
    int length;

    length = strlen(str);

    for(i=0;i<length/2;i++) {
        char temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
        printf("Reversed str %s\n",str);
    
}