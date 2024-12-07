#include<stdio.h>
#include<conio.h>
int main () {
int i=0,j=0;
char a[100],b[100];
clrscr();
printf("Enter a string: ");
scanf("%[^*]s",a);
printf("Enter b string: ");
scanf("%[^#]s",b);
while(a[i]!='\0'){
i++;
}
while(b[j]!='\0'){
a[i]=b[j];
j++;
i++;
}
a[i]='\0';
printf("The concatenated string a is %s.",a);
getch();
}