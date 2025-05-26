#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char ch;

    printf("Enter the character : ");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z') {
        printf("%c is an uppercase \n",ch);
    } else {
        printf("%c not an uppercase \n",ch);
    }
    return 0;
}