#include<stdio.h>
#include<conio.h>
void main () {
int n=5,i,j;
clrscr();
for(i=n;i>0;i--){
for(j=1;j<=n-i;j++){
printf(" ");
}
for(j=1;j<=2*i-1;j++){
printf("*");
}
printf("\n");
}
getch();
}