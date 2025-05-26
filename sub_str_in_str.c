#include<stdio.h>
#include<string.h>
int main() {
    char str[100],substr[100];
    int start,length,i;

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);
    size_t str_len = strlen(str);
    if(str_len>0 && str[str_len-1]=='\n') {
        str[str_len=1]='\0';
    }
    printf("Enter start position");
    scanf("%d",&start);
    printf("Lenght of substring : ");
    scanf("%d",&length);

    if (start<0 || start >= strlen(str) || length <0 || start+length>strlen(str)) {
        printf("Invalid start position ");
        return 1;
    } 
    for(i=0;i<length;i++) {
        substr[i]=str[start+i];
    }
    substr[i]='\0';
    printf("Extract sub str : %s\n",str);
    return 0;
}