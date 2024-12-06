#include<stdio.h>
#include<conio.h>
#include<math.h>
int main () {
int n,count=0,temp,r,sum=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
temp=n;
while(n!=0){
n=n/10;
count++;
}
n=temp;
while(n!=0){
r=n%10;
sum=sum+pow(r,count);
n=n/10;
}
if(temp==sum){
printf("It's an armstrong number.");
} else {
printf("It's not an armstrong number.");
}
getch();
return 0;
}

