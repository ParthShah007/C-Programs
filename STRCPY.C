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
int i=0,j,count=0;
while(a[i]!='\0'){
i++;
}
for(j=0;j<i/2;j++){
if(a[j]==a[i-j-1]){
count++;
}
}
if(count==i/2){
printf("Palindrome");
} else {
printf("Not a palindrome");
}
}