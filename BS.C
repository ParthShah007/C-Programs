#include<stdio.h>
#include<conio.h>
void main () {
int l,h,m,x,a[100],n,i,j,temp;
clrscr();
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the target element: ");
scanf("%d",&x);
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The sorted array is: ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
l=0;
h=n-1;
while(l<=h){
m=(l+h)/2;
if(x==a[m]){
printf("The index of the target element is %d.\n",m);
break;
}else if(x>a[m]){
l=m+1;
}else if(x<a[m]){
h=m-1;
}
}
if(l>h){
printf("Invalid input.");
}
getch();
}




