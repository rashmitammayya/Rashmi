#include<stdio.h>
 int main()
 {
 int n,rev=0,original,rem;
 printf("enter the number");
 scanf("%d",&n);
 original=n;
 while(n!=0){
 rem = n%10;
 rev= rev*10+rem ;
 n/=10;
 }
printf("%d",rev);

if(original==rev)
    {
 printf("palindrome ");
 }

 else{
 printf("not palindrome");

 }
 }
