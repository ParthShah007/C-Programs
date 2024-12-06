#include<stdio.h>
#include<conio.h>
void main () {
int n,i,fact=1;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
if(n>0){
for(i=1;i<=n;i++){
fact=fact*i;
}
printf("The factorial of n is %d",fact);
}
else {
printf("Invalid input.");
}

getch();
}
