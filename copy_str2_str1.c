#include<stdio.h>
int main() {
    int i;
    char str1[10],str2[10];

    printf("Enter string : ");
    fgets(str2,sizeof(str2),stdin);

    for(i=0;str2[i]!='\0';i++) {
        str1[i]=str2[i];
    }
    printf("Original : %s",str2);
    printf("Copied : %s",str1);

    return 0;
}