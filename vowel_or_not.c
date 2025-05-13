#include<stdio.h>
int main() {
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    ch = (ch>='A' && ch<='Z') ? ch+('a'-'A') : ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
        printf("These are vowels");
    } else {
        printf("Not an vowels");
    }
    return 0;
}