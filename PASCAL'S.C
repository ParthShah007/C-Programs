#include<stdio.h>
#include<conio.h>
void main () {
int i,j,s,c;
clrscr();
for(i=0;i<=4;i++){
for(s=1;s<=4-i;s++){
printf(" ");
}
for(j=0;j<=i;j++){
if(i==0 || j==0){
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