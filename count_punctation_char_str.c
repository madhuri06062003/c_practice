#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[1000];
    int count=0;
    int i;

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++) {
        if(ispunct(str[i]))  {
            count++;
        }
       }
       printf("Punctuation count %d\n",count);
       return 0;

}