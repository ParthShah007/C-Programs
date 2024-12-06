#include<conio.h>
#include<stdio.h>
void main () {
int a[10],i,n,posi;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the position of element for deletion: ");
scanf("%d",&posi);
for(i=posi-1;i<n;i++){
a[i]=a[i+1];
}
printf("The new array is: ");
for(i=0;i<n-1;i++){
printf("%d ",a[i]);
}
getch();
}