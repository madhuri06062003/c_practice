#include<stdio.h>
int main() {
    char str[100];
    int i=0;

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);

    printf("Individual character in str :\n");
    while(str[i]!='\0' && str[i]!='\n') {
        printf("Char %d : %c\n",i,str[i]);
        i++;
    }
    return 0;
}