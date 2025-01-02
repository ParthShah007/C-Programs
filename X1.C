#include<stdio.h>
#include<conio.h>
#include<string.h>
void main () {
char name[20]="parth",x[20];
clrscr();
strcpy(x,name);
strrev(name);
if(strcmp(name,x)==0){
printf("Palindrome");
} else {
printf("NO.");
}
getch();
}
