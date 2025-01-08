#include<stdio.h>
#include<conio.h>
void main () {
int i=0;
char a[100],count[100]={0};
clrscr();
printf("Enter a string: ");
scanf("%s",a);
while(a[i]!='\0'){
count[a[i]]++;
i++;
}
for(i=0;i<100;i++){
if(count[i]>0){
printf("%c -> %d times\n",i,count[i]);
}
}
getch();
}