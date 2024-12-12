#include<stdio.h>
#include<conio.h>
void main () {
char *s;
int i=0;
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",s);
while(*(s+i)!='\0'){
i++;
}
printf("The length of the entered string is %d.",i);
}