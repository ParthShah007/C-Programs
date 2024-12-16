#include<stdio.h>
#include<conio.h>
void main () {
int a[100],i,j,b[100],n;
clrscr();
printf("Enter the numner of elements in the array: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
b[n-i-1]=a[i];
}
printf("The reversed array is: ");
for(i=0;i<n;i++){
printf("%d ",b[i]);
}
getch();
}
