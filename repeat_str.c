#include<stdio.h>
#include<string.h>
#define MAX_CHAR 256

int main() {
    char str[100];
    int freq[MAX_CHAR]={0};
    int i;

    printf("Enter string : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    for(i=0;str[i]!='\0';i++) {
        freq[(unsigned char)str[i]]++;
    }
    printf("Repeated char :\n");
    int found =0;
    for(i=0;i<MAX_CHAR;i++) {
        if(freq[i]>1) {
            printf("'%c' appears %d timesn",i,freq[i]);
            found =1;
        }
    }
    if(!found) {
        printf("No repeat");
    } else {
        printf("Repeat");
    }
    return 0;
}