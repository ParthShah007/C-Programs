#include<stdio.h>
#include<conio.h>
int revstr(char a[100]);
int main () {
char a[100];
int res;
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
res=revstr(a);
if(res==1){
printf("Palindrome");
} else {
printf("Not a palindrome");
}
getch();
return 0;
}
int revstr(char a[100]){
int i=0,j,count=0;
char b[100];
while(a[i]!='\0'){
i++;
}
for(j=0;j<i;j++){
b[j]=a[i-j-1];
if(b[j]==a[j]){
count++;
}
}
b[j]='\0';
if(count==i){
return 1;
}
return -1;
}