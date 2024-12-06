#include<stdio.h>
#include<conio.h>
int main () {
int n,t1=0,t2=1,t3,i;
clrscr();
printf("Enter the number terms in the series: ");
scanf("%d",&n);
printf("Fibonacci series: %d,%d,",t1,t2);
for(i=2;i<n;i++){
t3=t1+t2;
printf("%d,",t3);
t1=t2;
t2=t3;
}
getch();
return 0;
}