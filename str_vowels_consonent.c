#include<stdio.h>
#include <ctype.h>

int main() {
    char str[10];
    int i,vowels=0,consonents=0;

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++) {
        char ch = tolower(str[i]);
    }
    if(ch>='a' && ch<='z') {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch='u') {
            vowels++;
        } else {
            consonents++;
        }
    }
    printf("Vowels :%d\n",vowels);
    printf("Consonents : %d\n",consonents);

    return 0;
}