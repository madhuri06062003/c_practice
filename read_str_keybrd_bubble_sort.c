#include<stdio.h>
#include<string.h>
int main() {
    char str[1000],temp;
    int i,j;

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    size_t len =strlen(str);
    if(len > 0 && str[len-1]=='\n') {
        str[len-1]='\0';
    }

     len =strlen(str);

    for(i=0;i<len-1;i++) {
        for(j=0;j<len-i-1;j++) {
            if(str[j]>str[i]) {
                temp=str[i];
                str[i]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("str%s\n",str);
    return 0;
}