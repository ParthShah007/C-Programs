#include<stdio.h>
#include<conio.h>
int main () {
int n,i,j;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
printf(" ");
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
printf(" ");
printf(" ");
}
for(j=i+1;j>0;j--){
printf("%d",j);
printf(" ");
}
for(j=1;j<i+1;j++){
printf("%d",j+1);
printf(" ");
}
printf("\n");
printf(" ");
}
getch();
return 0;
}

