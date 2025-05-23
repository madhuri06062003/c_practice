#include<stdio.h>
int main() {
    int i,max=0;
    char str[10];
    int freq[20]={0};
    char maxchar;

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++) {
        freq[(unsigned char)str[i]]++;
    }
    for(i=0;i<20;i++) {
        if(freq[i]>max && i!='\n') {
            max=freq[i];
            maxchar =i;
        }
    }
    printf("Max number %c :%d\n",maxchar,max);
    return 0;
}