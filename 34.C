#include<stdio.h>
#include<conio.h>
void main () {
int i,j;
clrscr();
for(i=0;i<5;i++){
for(j=5;j>i;j--){
printf(" ");
}
for(j=5;j>5-i-1;j--){
printf("*");
}
printf("\n");
}
getch();
}