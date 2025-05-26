#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char ch;

    printf("Enter character : ");
    scanf("%c",&ch);

    if((ch>='0'&&ch<='9')|| (ch>='a'&&ch<='F')||(ch>='a'&&ch<='f')) {
        printf("Hexadecimal %c\n",ch);
    } else {
        printf("Noy a hexadecinal %c\n",ch);
    }
    printf("\n");
    return 0;
}