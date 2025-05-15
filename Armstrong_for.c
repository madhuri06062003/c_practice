#include <stdio.h>
#include <math.h>

int main() {
    int num,originalNum,remainder,result,n;
    printf("Armstrong number between 1 to 1000 :\n");

    for(num=1;num<=1000;num++) {
        originalNum = num;
        result =0;
        n=0;

        int temp = num;
        while(temp!=0) {
            temp/=10;
            n++;
        }
        temp=num;
        while(temp!=0) {
            remainder=temp%10;
            result = result+pow(remainder, n);
            temp/=10;
        }
        if(result == originalNum) {
            printf("%d\n",originalNum);
        }
    }
    return 0;
}