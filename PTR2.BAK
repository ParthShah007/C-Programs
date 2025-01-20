#include<stdio.h>
#include<conio.h>
int *get(int *a);
int *get(){
static int a[100],i=0;
printf("Enter the number of elements: ");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
return a;
}
void main () {
int *n,i;
int a[100];
clrscr();
n=get(a);
printf("Array: ");
for(i=0;i<5;i++){
printf("%d ",n[i]);
}
getch();
}