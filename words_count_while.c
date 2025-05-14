#include<stdio.h>
#include<ctype.h>

int main() {
    char str[100];
    int i=0,count =0;

    printf("Enter character ");
    scanf("%c",str);

    while(str[i]!='\0') {
        if(!isspace(str[i]) && (i==0 || isspace(str[i-1]))) {
            count++;
        }
        i++;
        printf("Word count %d\n",count);
        return 0;
    }
}