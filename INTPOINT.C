#include<stdio.h>
#include<conio.h>
void main () {
char name[]="Parth Shah";
char *ptr=name;
int len=0;
clrscr();
while(*ptr!='\0'){
len++;
ptr++;
}
printf("The length of the string is %d.",len);
getch();
}