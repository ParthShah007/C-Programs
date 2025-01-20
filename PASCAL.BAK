#include<stdio.h>
#include<conio.h>
void main () {
int c=1,n,i,j;
clrscr();
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n-i;j++){
printf(" ");
}
for(j=0;j<=i;j++){
if(j==0 || i==0){
c=1;
}else{
c=c*(i-j+1)/j;
}
printf("%2d",c);
}
printf("\n");
}
getch();
}