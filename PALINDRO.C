#include<stdio.h>
#include<conio.h>
void main () {
long int n,r,rev=0,originalnum;
clrscr();
printf("Enter a number: ");;
scanf("%ld",&n);
originalnum=n;
while(n!=0){
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(originalnum==rev){
printf("The entered number is a palindrome.");
} else {
printf("The entered number isn't a palindrome.");
}
getch();
}