#include<stdio.h>
int main() {
    char str[100];
    char replacechar;
    int i=0;
     printf("Enter str : ");
     fgets(str,sizeof(str),stdin);

     printf("Enter replace character : \n");
     scanf("%c",&replacechar);

     while(str[i]!='\0') {
        if(str[i]!=' ') {
            str[i]=replacechar;
        }
        i++;
     }
     printf("Modified :%s\n",str);
     return 0;
}