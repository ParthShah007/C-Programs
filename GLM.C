#include<stdio.h>
#include<conio.h>
void main () {
int gcd,lcm,a,b;
clrscr();
printf("Enter a and b: ");
scanf("%d %d",&a,&b);
while(b!=0){
b=a%b;
a=b;
b=a%b;
}
gcd=a;
lcm=(a*b)/a