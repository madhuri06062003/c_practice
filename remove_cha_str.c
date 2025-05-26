#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[100],result[100];
    int i,j;

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++) {
        if(isalph(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j]='\0';
    printf("Remove character in str %s\n",result);
    return 0;
}