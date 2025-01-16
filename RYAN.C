#include<stdio.h>
#include<conio.h>
void main () {
int a[100]={1,2,3,4,5,6,7,8,9,10},*p,i=0;
clrscr();
p=a;
while(*p!='\0'){
i++;
p++;
}
printf("The length is %d.",i);
getch();
}
