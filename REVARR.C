#include<stdio.h>
#include<conio.h>
void main () {
int a[10]={1,2,3,4,5},i,n,temp;
clrscr();
for(i=0;i<n;i++){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
printf("The reversed array is: ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
getch();
}