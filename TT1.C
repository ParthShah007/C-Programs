#include<stdio.h>
#include<conio.h>
void main () {
int a[100],i=0,c=0;
clrscr();
printf("Enter the elements: ");
while(a[i-1]!=-1){
scanf("%d",&a[i]);
c++;
i++;
}
printf("Array A: ");
for(i=0;i<c-1;i++){
printf("%d ",a[i]);
}
getch();
}