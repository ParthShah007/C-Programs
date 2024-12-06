#include<stdio.h>
#include<conio.h>
void main () {
int x,y,z;
clrscr();
printf("Enter the values of x, y and z: ");
scanf("%d %d %d",&x,&y,&z);
printf("Descending order is: ");
if(x>y && x>z)
if(y>z)
printf("x>y>z");
else
printf("x>z>y");
else if(y>x && y>z)
if(x>z)
printf("y>x>z");
else
printf("y>z>x");
else
if(x>y)
printf("z>x>y");
else
printf("z>y>x");

getch();
}