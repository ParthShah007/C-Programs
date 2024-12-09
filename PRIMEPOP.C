#include<stdio.h>
#include<conio.h>
void prime(int m,int n);
int main () {
    int n,m;
    clrscr();
    printf("Enter range to print the prime numbers in between: ");
    scanf("%d %d",&m,&n);
    prime(m,n);
    getch();
    return 0;
}
void prime(int m,int n){
    int i,j;
    for(i=m;i<=n;i++){
	if(i<2){
	    continue;
	}
	for(j=2;j<i;j++){
	    if(i%j==0){
		break;
	    }
	}
    if(j==i){
    printf("%d, ",i);
    }
    }
}