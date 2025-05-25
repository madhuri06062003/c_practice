#include<stdio.h>
#include<string.h>

int main() {
    int i,j;
    char temp;
    char str[10];

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")] = '\0';
    int len=strlen(str);

    for(i=0;i<len-1;i++) {
        for(j=i+1;j<len;j++) {
            if(str[i]>str[j]) {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("Ascending :%s\n",str);
    return 0;
}