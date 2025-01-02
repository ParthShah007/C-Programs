#include<stdio.h>
#include<conio.h>
void main () {
int a=1,b=3,c=10;
int* x,y,z;
clrscr();
x=&a;
y=&b;
z=&c;
if (*x>*y && *x>*z) {
printf("a is greatest.");
} else if (*y>*x && *y>*z) {
printf("b is greatest.");
} else {
printf("c is greatest.");
}
getch();
}
