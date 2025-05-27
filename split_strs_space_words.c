//string by spaces into words using strtok():
#include<stdio.h>
#include<string.h>

int main() {
    char str[200];
    char *word;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    word=strtok(str, " ");
    printf("Words in the string :\n");
    while(word!=NULL) {
        printf("%s\n",word);
        word=strtok(NULL," ");
    }
    return 0;
}