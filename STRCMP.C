#include<stdio.h>
#include<conio.h>
int cmpstr(char a[100],char b[100]);
int main () {
char a[100],b[100];
int res;
clrscr();
printf("Enter a string: ");
gets(a);
printf("Enter b string: ");
scanf("%[^$]s",b);
res=cmpstr(a,b);
printf("%d",res);
getch();
return 0;
}
int cmpstr(char a[100],char b[100]){
int i=0,j,res;
while(a[i]!='\0' || b[i]!='\0'){
	if(a[i]!=b[i]){
		break;
	}
	i++;
}
res=a[i]-b[i];
if(res==0){
	return 0;
} else {
	if(res>0){
		return 1;
	} else {
		return -1;
	}
}
}



