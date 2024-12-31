#include<stdio.h>
#include<conio.h>
int lcm(int a,int b);
int gcd(int a,int b);
int main () {
int a,b,res1,res2;
clrscr();
printf("Enter a and b: ");
scanf("%d %d",&a,&b);
res1=gcd(a,b);
res2=lcm(a,b);
printf("The gcd is %d and lcm is %d.",res1,res2);
getch();
return 0;
}
int gcd(int a,int b){
if(b==0){
return a;
} else {
return gcd(b,b%a);
}
}
int lcm(int a,int b){
return (a*b)/gcd(a,b);
}