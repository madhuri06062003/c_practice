#include<stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter string : ");
    scanf("%s",str);

    printf("String before newline : ");
    for(i=0;str[i]!='\0';i++) {
        if(str[i]=='\n') {
            break;
        }
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}