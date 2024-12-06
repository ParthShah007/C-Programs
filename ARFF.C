#include<stdio.h>
#include<conio.h>
void display(int *a[10],int n);
void main () {
int a[10],i,n;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
display(&a,n);
getch();
}
void display(int *a[10],int n){
int i;
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}