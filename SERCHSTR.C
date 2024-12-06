#include<stdio.h>
#include<conio.h>
void serch(char a[100],char x[100]);
int main () {
char a[100],x[100];
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
printf("Enter the word in a string: ");
scanf("%s",x);
serch(a);
getch();
return 0;
}
void serch(char a[100],char x[100]){
int i=0,j=0,k=0;
while(a[i]!='\0'){
i++;
}
for(j=0;j<i;j++){
if(a[j]!=' '){
a[j]==x[k];
k++;
}
}






