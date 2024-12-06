#include<stdio.h>
#include<conio.h>
int strcmp(char a[100],char b[100]);
int main () {
char a[100],b[100];
int res;
clrscr();
printf("Enter a string: ");
scanf("%[^$]s",a);
printf("Enter b string: ");
scanf("%[^#]s",b);
res=strcmp(a,b);
printf("%d",res);
getch();
return 0;
}
int strcmp(char a[100],char b[100]){
int i=0,j,res,c1=0,c2=0;
while(a[i]!='\0' || b[i]!='\0'){
if(a[i]==b[i]){
c1++;
} else {
c2++;
break;
}
i++;
}
res=a[c2]-b[c2];
if(c1==i){
return 0;
} else {
if(res>0){
return 1;
} else {
return -1;
}
}
}



