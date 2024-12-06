#include<stdio.h>
#include<conio.h>
void main () {
int n,i,j;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++){
for(j=1;j<=i;j++){
printf("*");
}
print("\n");
}
for(i=