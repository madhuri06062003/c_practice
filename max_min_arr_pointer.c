#include<stdio.h>
int main() {
int arr[]={1,2,4,5,6,7,8};
int i;
int min;
int max;

min=arr[0];
max=arr[0];

for(i=1;i<7;i++) {
if(arr[i]<min){
min=arr[i];
}
if(arr[i]>max){
max=arr[i];
}
printf("Max %d\n",min);
printf("Min %d\n",max);
}
return 0;
}
