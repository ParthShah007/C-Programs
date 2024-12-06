#include<stdio.h>
#include<conio.h>
void revstr(char a[100]);
void main () {
char a[100];
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
revstr(a);
getch();
}
void revstr(char a[100]){
int i=0,j;
char b[100];
while(a[i]!='\0'){
i++;
}
for(j=0;j<i;j++){
b[j]=a[i-j-1];
}
b[j]='\0';
printf("The reversed string is: ");
printf("%s",b);
}