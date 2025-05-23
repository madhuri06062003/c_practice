#include<stdio.h>
int main() {
    int i,isequal=1;
    char str1[10],str2[10];

    printf("Enter str1 :");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter str2 :");
    fgets(str2,sizeof(str2),stdin);

    for(i=0;str1[i]!='\0'|| str2[i]!='\0';i++) {
        if(str1[i]!=str2[i]) {
            isequal=0;
            break;
        }
    }
    if(isequal) {
        printf("equal:\n");
    } else {
        printf("Not equal\n");
    }
    return 0;
}
