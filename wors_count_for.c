#include <stdio.h>
#include<ctype.h>

int main() {
    char str[100];
    int i,count =0;

    printf("Enter character : ");
    scanf("%c",str);

    for(i=0;str[i]!='\0';i++) {
        if(!isspace(str[i]) && (i==0 || isspace(str[i-1]))) {
            count++;
        }
        printf("Words count %d\n",count);
        return 0;
    }
}