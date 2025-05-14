#include<stdio.h>
int main() {
    int count=0;
    int i;
    char str[100];

    printf("Enter character ");
    scanf("%c",str);

    for(i=0;str[i]!='\0';i++) {
        char ch =str[i];
        if(ch=='a'|| ch=='A'|| ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch =='o' || ch =='O' || ch=='u'|| ch=='U') {
            count++;

        }
    }
    printf("Count elements in array %d\n",count);
    return 0;
}