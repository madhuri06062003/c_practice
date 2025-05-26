#include<stdio.h>
#include<string.h>
#include<ctype.h>

int iswordthe(const char *word) {
    return (strlen(word)==3 && tolower(word[0] =='t')&& (tolower(word[1]=='h'))&&tolower(word[2]));
}
int main() {
    char str[100],word[200];
    int count =0;

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    char *delimiters = " ,.!?;:\t\n";
    char *token = strtok(str,delimiters);

    while(token !=NULL) {
        if(iswordthe(token)) {
            count++;
        }
        token=strtok(NULL,delimiters);
    }
    printf("The word the apperas %d\n",count);
    return 0;
}