#include<conio.h>
#include<stdio.h>
void main () {
int a[10],i,n,posi,w;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the number you wanna insert: ");
scanf("%d",&w);
printf("Enter the position of element for insertion: ");
scanf("%d",&posi);
for(i=n;i>posi-1;i--){
a[i]=a[i-1];
}
a[posi-1]=w;
n++;
printf("The new array after insertion is: ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
getch();
}