#include<stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i=0;

    printf("Enter character : ");
    scanf("%s",str);
    
    while(str[i]!='\0') {
        str[i]= toupper(str[i]);
        i++;
    }
    printf("Upper%s",str);
    return 0;

}