#include<stdio.h>
#include<conio.h>
void main () {
long n,rev=0,sum=0,r;
clrscr();
printf("Enter a number: ");
scanf("%ld",&n);
if(n>9){
while(n!=0){
r=n%10;
rev=rev*10+r;
sum=sum+r;
n=n/10;
}
printf("The reversed number and the sum of digits is %ld, %d.",rev,sum);
}
else{
printf("Invalid input.");
}
getch();
}