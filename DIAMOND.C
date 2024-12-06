#include<stdio.h>
#include<conio.h>
void main () {
int n,i,j;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=0;i<=n;i++){
for(j=1;j<=n-i+1;j++){
printf(" ");
}
printf("*");
for(j=1;j<=2*i-1;j++){
printf(" ");
}
if(i!=0){
printf("*");
}
printf("\n");
}
for(i=1;i<=n;i++){
for(j=1;j<=i+1;j++){
printf(" ");
}
printf("*");
for(j=2*(n-i)-1;j>0;j--){
printf(" ");
}
if(i!=n){
printf("*");
}
printf("\n");
}
getch();
}