#include<stdio.h>
#include<conio.h>
void main () {
int n,i;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=2;i<n;i++){
if(n%i==0){
printf("It's not a prime number.");
break;
}
}
if(i==n){
printf("It's a prime number.");
}
getch();
}