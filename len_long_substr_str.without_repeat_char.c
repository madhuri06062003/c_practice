#include<stdio.h>
#include<string.h>
#define MAX_CHAR 256

int longsubstr(char *str) {
    int n=strlen(str);
    int maxlength=0;
    int start=0;

    int lastindex[MAX_CHAR];

    for(int i=0;i<MAX_CHAR;i++) {
        lastindex[i]=-1;
    }
    for(int end =0;end<n;end++) {
        if(lastindex[(unsigned char)str[end]]>=start) {
            start =lastindex[(unsigned char)str[end]]+1;
        }
        lastindex[(unsigned char)str[end]]=end;

        int currentlength = end-start+1;
        if(currentlength>maxlength) {
            maxlength=currentlength;
        }
    }
    return maxlength;
}
int main() {
    char str[100];

    printf("Enter str : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]=0;

    int result =longsubstr(str);
    printf("Length of long str without repeat ch%d\n",result);
    return 0;
}