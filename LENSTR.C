#include<stdio.h>
#include<conio.h>
void lenstr(char a[100]);
void main () {
char a[100];
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
lenstr(a);
getch();
}
void lenstr(char a[100]){
int i=0;
while(a[i]!='\0'){
i++;
}
printf("The length of the string is %d.",i);
}