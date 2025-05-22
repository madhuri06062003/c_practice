#include<stdio.h>
int main() {
    char str[100];

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);
    printf("Enter your :%s\n",str);

    return 0;
}