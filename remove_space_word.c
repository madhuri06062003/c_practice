#include<stdio.h>
#include<ctype.h>

int main() {
     char ch;
     FILE *file;

     file = fopen("input.txt","r");

     if(file==NULL) {
        printf("Error:could not open file.\n");
        return 1;
     }
     printf("Content without space :\n");

     while((ch=fgetc(file))!=EOF) {
        if(ch!=' ') {
            putchar(ch);
        }
     }
     fclose(file);
     return 0;
}