#include<stdio.h>
#include<conio.h>
void main () {
int a[100],*p,i=0,temp;
clrscr();
p=a;
printf("Enter the elements: ");
for(i=0;i<5;i++){
scanf("%d",&p[i]);
}
for(i=0;i<5;i++){
temp=p[5-i-1];
p[5-i-1]=p[i];
p[i]=temp;
}
printf("The darshan array is: ");
for(i=0;i<5;i++){
printf("%d ",*(p+i));
}
getch();
}

