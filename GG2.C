#include<stdio.h>
#include<conio.h>
void fact(int *n);
void main () {
int n;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
if(n<0){
printf("Factorial not possible.");
} else {
fact(&n);
}
getch();
}
void fact(int *n){
int mult=1;
if((*n)==0){
mult=1;
} else {
while(*n!=1){
mult*=(*n);
(*n)--;
}
}
printf("The factorial is %d.",mult);
}

