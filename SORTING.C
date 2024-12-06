#include<conio.h>
#include<stdio.h>
void main () {
int a[10],i,j,temp,n;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]<a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
printf("The sorted array is: ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
getch();
}