#include <stdio.h>
int main() {
    int i,digital=0,alphabets=0,specialchar=0;
    char str[100];

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++) {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {
            alphabets++;
        } else if(str[i]>='0' && str[i]<='9') {
            digital++;
        } else if(str[i] !='\n') {
            specialchar++;
        }
    }
    printf("%d alphabets:",alphabets);
    printf("%d digits :",digital);
    printf("%d special char :",specialchar);

    return 0;
}