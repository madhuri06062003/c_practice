#include<stdio.h>
#include<string.h>

int main() {
    char str[100],ch;
    int i,count =0;

    printf("Enter str:");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    printf("Enter character :\n");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]==ch) {
            count++;
        }
    }
    if(count >0) {
        printf("char %c occurs %d str\n",ch,count);
    } else {
        printf("charcter not occur %c\n",ch);
    }
    return 0;
}