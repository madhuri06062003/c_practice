#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int i=0,j=0;
    char str1[100],str2[100],result[100];

    printf("Enter str1 : ");
    fgets(str1,sizeof(str1),stdin);

    str1[strcspn(str1,"\n")]=0;

    printf("Enter str2 :\n");
    fgets(str2,sizeof(str2),stdin);

    str2[strcspn(str2,"\n")]=0;

    while(str1[i]!='\0') {
        result[i]=str1[i];
        i++;
    }
    while(str2[i]!='\0') {
        result[i]=str2[j];
        i++;
        j++;
    }
    result[i]='\0';
    
    printf("Combin of 2 str : %s\n",result);
    return 0;

}