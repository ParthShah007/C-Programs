#include<stdio.h>
#include<conio.h>
void main () {
int *a,*b;
int c=0,d=1,n,i,x;
clrscr();
a=&c;
b=&d;
printf("Enter the number of terms: ");
scanf("%d",&n);
printf("The fib series is %d,%d",c,d);
for(i=2;i<n;i++){
x=(*a)+(*b);
printf(",%d",x);
*a=*b;
*b=x;
}
getch();
}



