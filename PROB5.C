#include<stdio.h>
#include<conio.h>
void main () {
int i=0,j=0,k,count,max,l=0;
char a[100],res,visited[100];
clrscr();
printf("Enter a string: ");
gets(a);
while(a[i]!='\0'){
	i++;
	l++;
}
for(i=0;i<l;i++){
	visited[i]=0;
}
for(i=0;i<l;i++){
	if(visited[i]==1) {
		continue;
	}
	count=1;
	for(j=i+1;j<l;j++){
		if(a[i]==a[j]){
			count++;
			visited[j]=1;
		}
	}
printf("%c -> %d times\n",a[i],count);
}
getch();
}