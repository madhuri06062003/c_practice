#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_CHAR 256

int main() {
    char str[100];
    int freq[MAX_CHAR]={0};
    int i;

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    for(i=0;str[i]!='\0';i++) {
        freq[(unsigned char)str[i]]++; 
    }
    printf("Char freq \n");
    for(i=0;i<MAX_CHAR;i++) {
        if(freq[i]>0) {
            printf("'%c' = %d\n",i,freq[i]);
        }
    }
    return 0;
}