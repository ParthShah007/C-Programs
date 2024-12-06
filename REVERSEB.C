#include<stdio.h>
#include<conio.h>
void main () {
long n,rev=0,r;
clrscr();
printf("Enter a number: ");
scanf("%ld",&n);
while(n!=0){
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("The reversed number is %ld.",rev);
getch();
}