#include<stdio.h>
#include<string.h>
int main() {
    char str[100],ch;
    int i,found = 0;

    printf("Enter a str: ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    printf("Enter character :\n");
    scanf("%c",&ch);

    printf("Occurrences of '%c':\n",ch);
    for(i=0;str[i]!='\0';i++) {
        if(str[i]==ch) {
            printf("position %d (index %d)\n",i+1,i);
            found =1;
        }
    }
    if(!found) {
        printf("char %c not found string\n",ch);

    }
    return 0;
}