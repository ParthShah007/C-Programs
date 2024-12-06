#include<stdio.h>
#include<conio.h>
void main () {
int arr[3][2],i,j;
clrscr();
for(i=0;i<3;i++){
for(j=0;j<2;j++){
printf("Enter the value of arr[%d][%d]\n",i,j);
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<2;j++){
printf("arr[%d][%d] is %d.\n",i,j,arr[i][j]);
}
}


getch();
}