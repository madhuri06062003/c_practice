#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter str :");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    for(i=0;str[i]!='\0';i++) {
        str[i]=tolower(str[i]);
    }
    printf("Lowecase %s\n",str);
    return 0;
}