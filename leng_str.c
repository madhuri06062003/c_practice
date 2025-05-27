#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int length =0;

    printf("Enter str :");
    fgets(str,sizeof(str),stdin);

    while(str[length]!='\0' || str[length]!='\n') {
        length++;
    }
    printf("Length of str %d\n",length);
    return 0;
}