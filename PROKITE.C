#include<stdio.h>
#include<conio.h>
void main () {
int n,i,j;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
printf(" ");
}
for(j=i+1;j>0;j--){
printf("%d",j);
}
for(j=2;j<=i+1;j++){
printf("%d",j);
}
printf("\n");
}
for(i=0;i<3;i++){
for(j=0;j<i+1;j++){
printf(" ");
}
for(j=n-i-1;j>0;j--){
printf("%d",j);
}
for(j=2;j<n-i-2;j++){
printf("%d",j);
}
printf("\n");
}
getch();
}
