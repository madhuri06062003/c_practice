#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[100];
    char word[100],small[100],large[100];
    int i=0,j=0;
    int len,minlen=1000,maxlen=0;

    printf("Enter string : ");
    fgets(str,sizeof(str,stdin));

    str[strcspn(str,"\n")]=0;

    len =strlen(str);

    while(i<=len) {
        if(str[i]!=' '&&str[i]!='\0') {
            word[j++]=str[i];
        } else{
            if(j>0) {
                word[j]='\0';

                if(j<minlen){
                    minlen=j;
                    strcpy(small,word);
                }
                if(j>maxlen) {
                    maxlen=j;
                    strcpy(large,word);
                }
                j=0;
            }
        }
        i++;
    }
    printf("Small %s\n",small);
    printf("Large %s\n",large);
    return 0;
}