#include<stdio.h>
#include<string.h>

int main() {
    char str[100],ch;
    int i,pos =-1;

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    printf("Enter character :\n");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]==ch) {
            pos =i;
        }
    }
    if(pos!=-1) {
        printf("last occurence %c found %d[index%d]\n",ch,pos+1,pos);
    } else {
        printf("Not found %c\n",ch);
    }
    return 0;
}