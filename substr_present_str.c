#include<stdio.h>
#include<string.h>

int main() {
    char str[100],substr[100];
    

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str, "\n")]=0;

    printf("Enter sub str : \n");
    fgets(substr,sizeof(str),stdin);

    substr[strcspn(substr ,"\n")] =0;

    if(strstr(str,substr)!=NULL) {
        printf("Sub string present : \n"); 
    } else {
        printf("Sub str not present : \n");
    }
    return 0;
}