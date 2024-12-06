#include<stdio.h>
#include<conio.h>
void name(int n);
void main () {
int n;
clrscr();
printf("Enter number of times: ");
scanf("%d",&n);
name(n);
getch();
}
void name(int n){
if(n==0){
return;
} else {
name(n-1);
printf("Parth Shah\n");
}
}