#include<conio.h>
#include<stdio.h>
void main() {
int i=0,j=0,c=0,d,k=0;
char a[100],b[100],x[100];
clrscr();
printf("Enter the word u want to count end with $\n");
scanf("%[^$]s",a);
printf("Enter the string end with #\n");
scanf("%[^#]s",b);
while(b[i]!='\0'){
if(a[0]==b[i]){
if((b[i-1] == ' ')||(b[i-1]==',')||(b[i-1]=='.')||(b[i-1]=='\n')){
j=0;
while(a[j]!='\0'){
if(a[j]==b[i]){
d=0;
} else {
d=1;
break;
}
j++;i++;
}
if(!((d==0)&&(b[i]=='\0')||(b[i]==',')||(b[i]==' ')||(b[i-1]=='.')||(b[i-1]=='\n'))){
x[k++]=a[i];
}}}
i++;
}
printf("%s",c);
getch();
}

