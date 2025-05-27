#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 1000

void reverse(char* str,int start,int end) {
    while(start<end) {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        }
}

void reversewords(char* str) {
    int len =strlen(str);

    reverse(str,0,len-1);

    int start =0,end =0;
    while(str[end]) {
        while(str[end]&& isspace(str[end])) {
            end++;
            start++;
        }
        while(str[end]&& !isspace(str[end])) {
            end++;
        }
        reverse(str,start,end-1);
        start = end;
    }
}

int main() {
    char str[MAX];
    
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    
    reversewords(str);
    printf("Reversed word order: %s\n", str);
    
    return 0;
}
