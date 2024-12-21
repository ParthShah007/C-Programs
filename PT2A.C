#include<stdio.h>
#include<conio.h>
int main () {
char *a;
int i=0;
char b[100]="Parth Shah";
clrscr();
a = &b;
while (*a!='\0') {
	i++;
	*a++;
}
printf("The length of the string is %d.",i);
getch();
return 0;
}





