#include<stdio.h>
#include<ctype.h>
int main() {
    int i=0;
    char str[100];
    int inword=0,count =0;

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0') {
        if(isspace(str[i])) {
            inword =0;
        } else if(inword ==0) {
            count++;
            inword=1;
        }
        i++;
    }
    printf("Total count :%d\n",count);
    return 0;
}