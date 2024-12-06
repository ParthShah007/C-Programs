#include<stdio.h>
#include<conio.h>
void main ()  {
int a[10],i,n,max,min, count=0;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++){
if(a[i]>max)
max=a[i];
}
for(i=1;i<n;i++){
if(a[i]<min)
min=a[i];
}
printf("The largest number in the list is %d.\n",max);
printf("The lowest number in the list is %d.",min);
getch();
}