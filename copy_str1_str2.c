#include<stdio.h>
int main() {
    char str1[10],str2[10];
    int i;

    printf("Enter string : ");
    fgets(str1,sizeof(str1),stdin);

    for(i=0;str1[i]!='\0';i++) {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("Original string : %s",str1);
    printf("Copied string : %s",str2);

    return 0;
}