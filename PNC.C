#include<stdio.h>
#include<conio.h>
int fact(int n);
float pnc(int n,int r);
int main () {
int n,r;
float x;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
printf("Enter another number: ");
scanf("%d",&r);
x=pnc(n,r);
printf("The result is %.2f",x);
getch();
return 0;
}
int fact(int n){
int res=1,i;
for(i=1;i<=n;i++){
res=res*i;
}
return res;
}
float pnc(int n,int r){
return (fact(n))/(fact(r)*fact(n-r));
}
