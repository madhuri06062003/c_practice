#include<stdio.h>
int main() {
    int i,length =0;
    char str[100];

    printf("Enter character : ");
    scanf("%s",str);

    for(i=0;i<str[i];i++) {
        length++;
    }
    
    printf("Length of string %d\n : ",length);
    return 0;
}