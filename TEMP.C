#include<stdio.h>
#include<conio.h>
void main () {
int a[10]={1,2,3,4,5},i,temp;
clrscr();
temp=5;
for(i=0;i<5;i++){
if(temp==a[i]){
printf("The posi of temp is %d.\n",i+1);
}
}
getch();
}
