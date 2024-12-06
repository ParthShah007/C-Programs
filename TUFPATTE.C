#include<stdio.h>
#include<conio.h>
void main () {
int n,i,j;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=n;i>0;i--){
for(j=1;j<=n-i;j++){
printf(" ");
}
for(j=1;j<=i;j++){
printf("*");
}

getch();
}