#include<stdio.h>
#include<conio.h>
int gcd(int n1, int n2);
int main () {
int n1,n2,res;
clrscr();
printf("Enter two numbers: ");
scanf("%d %d",&n1,&n2);
res=gcd(n1,n2);
printf("The GCD is %d.",res);
getch();
return 0;
}
int gcd(int n1,int n2){
if(n2==0){
return n1;
} else {
return gcd(n2,n1%n2);
}
}