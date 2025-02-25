#include<stdio.h>
#include<conio.h>
void pow(int x,int y);
void main () {
int x,y;
clrscr();
printf("Enter the base: ");
scanf("%d",&x);
printf("Enter the power: ");
scanf("%d",&y);
pow(x,y);
getch();
}
void pow(int x,int y){
int i=0,res=1;
for(i=0;i<y;i++){
res*=x;
}
printf("x^y: %d",res);
}