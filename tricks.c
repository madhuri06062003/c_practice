palindrome : the word or numbers that should get same at front and back while reading 
             example : madam,121,level,3456543,....
Factorial : It is a non negative interger 
             to calculate : unsigned long long factorial = factorial *1;
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
        for(i=1;i<=exponent;i++)
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

1st occurance of ch in str : found =0;
                             for(i=0;str[i]!'\0';i++) {
                                while(str[i]==ch) {
                                    found =1;
                                     break;
                                }
                             }
2d matrix : int matrix[10][10];
            for(i=0;i<10;i++) {
                for(j=0;j<1-;j++) {
                    printf("Position [%d][%d] \n".i,j);
                    scanf("%d",&matrix[i][j];)
                }
            }                             
            printf("Matrix\n");
            for(i=0;i<10;i++) {
                for(j=0;j<10;j++) {
                    printf("%d",matrix[i][j];)
                }
            }
2integers same or not : int num1,num2;
                        if(num1==num2) {
                            printf("Equal\n");
                        } else {
                            printf("Not equal \n")
                        }
2nd largest arr in if : int largest,secondlargest;
                        int arr[100],n,i;
                        enter elements;
                        for(i=0;i<n;i++) {
                            scanf("%d",&arr[i])''
                        }
                        if(arr[0]<arr[i]) {
                            largest = arr[0]
                            secondlargest=arr[1];
                        }
                        else {
                            largest = arr[1];
                            secondlargest=arr[0];
                        }
                        for(i=2;i<n;i++) {
                            if(arr[i]>largest) {
                                largest=secondlargest;
                                secondlargest=arr[i];
                            } else if(arr[i]<secondlargest && arr[i]!=largest) {
                                secondlargest = arr[i];
                            }
                        }
3*3 matrix : int matrix[10][10],i,j,detrminate;
              for(i=0;i<10;i++) {
                for(j=0;i<10;j++) {
                    scanf("%d",&matrix[i][j]);
                }
              }
              determine=matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])
                        matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[2][0]*matrix[1][2])
                        matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[2][0]*matrix[1][1])
GCD (greatest comman divider [HCF]): 
       int a,b,temp;
       while(b!=0) {
        temp=b;
        b=a%b;
        a=temp;
       }
count all occurence : int i,count=0;
                      char str[100],ch;
                      for(i=0;str[i]!='\0';i++) {
                        while(str[i]==ch) {
                            count++;
                        }
                      }
                      if(count>0) {
                        printf("occurnsce char %c %dstr\n",ch,i+1,i);
                      } else {
                        printf("No occurense %c \n",ch);
                      }    
Aplhabet or not : char ch;
                  if(ch>='A'&&ch<='Z'||ch>='a'&&ch<=z) {
                    printf("alphabets\n");
                  } else {
                    printf("Not alphabets\n");
                  }
Ascii : int arr[10];
        int n,i;
        for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }
        printf("Ascii value : ");
        for(i=0;i<n;i++) {
            printf("Ascii %c %d\n",arr[i],arr[i]);
        }
average element in arr : float calavg=(int arr[],int n) {
                          int sum =0;
                          int i;
                        for(i=0;i<n;i++) {
                            sum =sum+arr[i];
                        }  
                    }
                    int main() {
                        for(i=0;i<n;i++) {
                            scanf("%d",arr[i]);
                        }
                        float avg =calavg(arr,n);
                        printf("avg arr%f \n",avg);
                    }
character digit or not : char ch;
                         if(isdigit(ch)) {
                            printf("Char %c\n",ch);
                         } else {
                            printf("Not char %c\n",ch);
                         }
combne of 2 str : char str1[10],str2[10],result[10];
                   while(str1[i]!='\0') {
                    result [i]=str1[i];
                    i++;
                   } 
                   while(str2[i]!='\0') {
                    result[i]=str2[j];
                    i++;
                    j++;
                   }
Compare 2 str : int i,isequal=1;
                char stri[10],str2[10];
                for(i=0;str[1]!='\0'||str2[i]!='\0';i++) {
                    while(str1[i]!=str2[i]) {
                        isequal =0;
                        break;
                    }
                }

 convert string upper : char str[100];
                        int i=0;
                        while(str[i]!='\0'){
                            str[i]=toupper(str[i]);
                            i++;
                        }       
copy of str1 in str2 : char str1[10],str2[10];
                        int i;
                        for(i=0;str1[i]='\0';i++) {
                            str2[i]=str1[i];
                        }                   
                        str2[i]='\0';
copy of str2 in str1 : char str1[10],str2[10];
                        int i;
                        for(i=0;str2[i]!='\0';i++) {
                            str1[i]=str2[i];
                        }        
                        str1[i]!='\0';
count punctuation : char str[10],ch;
                     int i;
                     int count =0;
                     for(i=0;str[i]!='\0';i++) {
                        if(ispunct(str[i])) {
                            count++;
                        }
                     }
delete of array : int position,srr[100],i,n;
                   printf("Enter number :");
                   scanf("%d",&n);
                   printf("Enter position of element delete%d\n",n);
                   scanf("%d",&position);
                   for(i=0;i<n;i++) {
                    scanf("%d",&arr[i]);
                   }  
                   if(position<1||position>n) {
                    printf("Invalid") 
                   } else {
                    for(i=position-1;i<n-1;i++) {
                        arr[i]=arr[i+1];
                        n--;
                    }
                    printf("After deletion : ");
                    for(i=0;i<n;i++) {
                        printf("%d",arr[i]);
                    }
                   }
Freqence of character in string : #define MAX_CHAR 256
                                  int freq(MAX_CHAR)={0};
                                  int str[10],i;
                                  printf("Enter str");
                                  fgets(str,sizeof(str),stdin);
                                  str[strcspn(str,"\n")]='\0';
                                  for(i=0;str[i]!='\0';i++) {
                                    freq[(unsigned char)str[i]]++;
                                  }
                                  for(i=0;i<MAX_CHAR;i++){
                                    if(freq[i]>0){
                                        printf("'%c' = %d\n"i,freq[i]);
                                    }
                                  }
Hexadecimal character : char ch;
                        if((ch>='0'&&ch<='9')||(ch>='a'&&ch<='f')||(ch>='A'&&ch<='Z'))
individual character : while(str[i]!='\0'&&str[i]!'\n')   
individual reverse : while(str[i]!='\0' && str[i]!'n') {
                      i++;
                    }
                    printf("Reverse \n");
                    for(i=i-1;i>=0;i--){
                        printf("%d :%c\n",i,str[i]);
                    }
left diagonal of matrix : sum = sum+matrix[i][i];
right diagonal of matrix : sum =sum+matrix[i][n-1-i];
lower triangular of matrix : for(i=0;i<n;i++){
                                for(j=0;j<n;j++){
                                    if(j<=i){
                                        printf("%d\n",matrix[i][j])
                                    }
                                }
upper triangular of matrix : for(i=0;i<n;i++)
                             for(j=0;j<n;j++)
                             if(j>=i)
Maximum character string : int i,max=0;
                           char str[100];
                           int freq[20]={0};
                           char maxchar;
                           for(i=0;str[i]!='\0';i++)
                           freq[(unsigned char)str[i]]++;
                        for(i=0;i<20;i++)
                        if(freq[i]>max&&i!='\n')
                        max=freq[i];
                    maxchar=i;                             

newline : for(i=0;str[i]!='\0';i++)
        if(str[i]=='\n')
        putchar(str[i]);  
Palindrom : lenght = strlen(str);
            for(i=0;i<lenght/2;i++) {
                if(str[i]!=str[lenght-i-1])
                ispalindrome=0;
            }
            2) while(num!=0) {
                remainder=num%10;
                reversenum=reversenum*10+remainder;
                num/10;
                if(originalnum==reversenum)
            }
prime or not : if(num<=1) {}     
               printf("%d not prime:",num)
               while(i<=num/2) 
               if(num%i==0)
               isprime=0;
            break;
            i++;
struct : each member has it own memory
          can acess and modify all members simultain
 Union : All member share same memory 
        the size of union equal to size of largest member


-> : this operator used to access members of structure through pointer