#include<stdio.h>
#include<conio.h>
void main () {
int n,i,j;
clrscr();
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
printf(" ");
}
for(j=0;j<2*i+1;j++){
printf("*");
}
for(j=0;j<i+1;j++){
printf(" ");
}
for(j=2*(n-i-1)-1;j>0;j--){
printf("*");
}
printf("\n");
}
getch();
}