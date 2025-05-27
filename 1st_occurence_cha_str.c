#include<stdio.h>
#include<string.h>

int main() {
    char str[100],ch;
    int i,found=0;

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    printf("Enter character :\n");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]==ch) {
            found =1;
            break;
        }
    }
    if(found) {
        printf("1st occurence%c  position %d %d\n",ch,i+1,i);
    } else {
        printf("Character not found %c \n",ch);
    }
    return 0;
}