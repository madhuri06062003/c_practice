palindrome : the word or numbers that should get same at front and back while reading 
             example : madam,121,level,3456543,....
Factorial : It is a non negative interger 
             to calculate : unsigned long long factorial = factorial +i;
Fibonacci series : where each number is sum of 2 preceding one starting from 0 and 1
                   formula : f(n)=f(n-1)+f(n-2)
                   example: temp=t1+t2;
                            t1=t2;
                            t2=temp;
Reverse number : reverse=0
                 extract last digit using %10
                 add digit reverse by multiplying reverse by 10 and add digit
                 remove last digit from number by 10
                 repeate until 0

                 num,reverse =0,digit;
                 while(num!=0) {
                    digit = num%10;
                    reverse = reverse *10+digit;
                    num=num/10;
                 }
power : result =1,i,base,exponent;
        for(i=1;i<exponent;i++)
        result =result*base;
ascending order  : arr[10],n,i,j,temp;
                   for(i=0;i<n;i++) {
                    for(j=0;j<n;j++) {
                        if(arr[i]>arr[j+1]) {
                            temp = arr[i];
                            arr[i]=arr[j+1];
                            arr[j+1]=temp;
                        }
                    }
                   }
descending order : arr[i]<arr[j+1]
even or odd : number % 2==0
positive or not : if(num>0) {
                    positive;
                   } else if { 
                    negative;
                   } else {
                    zero;
                   }
Swapping elements : int a=10,b=23,temp;
                   temp=a;
                   a=b;
                   b=temp;

