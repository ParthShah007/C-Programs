#include<stdio.h>
#include<conio.h>
void main () {
int n,i,j,sum=1;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf("%d",sum);
printf(" ");
sum++;
}
printf("\n");
}
getch();
}
