#include<stdio.h>
#include<conio.h>
void main () {
int a[10][10],i,j,n,c=0;
clrscr();
printf("Enter the rows of the squre matrix: ");
scanf("%d",&n);
printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	scanf("%d",&a[i][j]);
		if((i==j  && a[i][j]==1) || (i!=j && a[i][j]==0)){
		c++;
		}
	}
}
if(c==n*n){
	printf("It's an identity matrix.");
} else {
	printf("It's not an identity matrix.");
}
getch();
}
