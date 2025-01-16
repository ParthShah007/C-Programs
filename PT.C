#include<stdio.h>
#include<conio.h>
void main () {
int a[10],*ptr,i=0;
clrscr();
ptr=&a;
printf("Enter 5 elements: ");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
printf("Array elements: ");
for(i=0;i<5;i++){
printf("%d ",*(ptr+i));
}
getch();
}