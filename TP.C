#include<stdio.h>
#include<conio.h>
void main () {
int i,j,n;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
printf(" ");
}
for(j=0;j<i+1;j++){
printf("%c",j+65);
}
printf("\n");
}
getch();
}
