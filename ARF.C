#include<stdio.h>
#include<conio.h>
void display(int *a);
void main () {
int a[10],i,n;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
display(&a[i]);
}
getch();
}
void display(int *a){
printf("%d ",*a);
}