#include<stdio.h>
#include<conio.h>
void lower(char a[100]);
int main () {
char a[100];
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
lower(a);
getch();
return 0;
}
void lower(char a[100]){
int i=0;
while(a[i]!='\0'){
if(a[i]<=90 && a[i]>=65){
a[i]+=32;
}
i++;
}
printf("%s",a);
}