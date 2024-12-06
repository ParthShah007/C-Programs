#include<stdio.h>
#include<conio.h>
void main () {
char a[100];
int i=0;
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
while(a[i]!='\0'){
printf("%c\n",a[i]);
i++;
}
printf("The length is %d.",i);
getch();
}