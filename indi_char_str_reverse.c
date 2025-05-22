#include<stdio.h>
int main() {
    int i=0;
    char str[100];

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);

    printf("Indivual char in str :\n");
    while(str[i]!='\0' && str[i]!='\n'){
    i++;
    }
    printf("Reverse:\n");
    for(i=i-1;i>=0;i--) {
        printf("%d: %c\n",i,str[i]);
    }
    return 0;
}