#include<stdio.h>
#include<conio.h>
void main () {
int a[10],*p,i=0;
clrscr();
p=a;
printf("Enter the elements of the array: ");
for(i=0;i<5;i++){
scanf("%d",&p[i]);
}
printf("Array: ");
for(i=0;i<5;i++){
printf("%d ",*(p+i));
}
getch();
}
