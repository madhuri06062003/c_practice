#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char sentence[100];
    int i;

    printf("Enter sentence : ");
    fgets(sentence,sizeof(sentence),stdin);

    for(i=0;sentence[i]!='\0';i++) {
        if(islower(sentence[i])) {
            sentence[i]=toupper(sentence[i]);
        } else {
            sentence[i]=tolower(sentence[i]);
        }
    }
    printf("Modified sentence %s\n",sentence);
    return 0;
}
