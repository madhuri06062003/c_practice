#include<stdio.h>
#include<string.h>
#include<ctype.h>

int ispalindrom(char str[]) {
    int left =0;
    int right = strlen(str)-1;

    while(left<right) {
        if(tolower(str[left])!=tolower(str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter str :");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    if(ispalindrom(str)) {
        printf("Palindrom :\n");
    } else {
        printf("Not Palindrom:\n");
    }
    return 0;
}