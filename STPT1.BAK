#include<stdio.h>
#include<conio.h>
typedef struct employee{
int id;
char name[10];
}emp;
void main () {
emp e[5];
int i,n,maxi=1;
clrscr();
printf("Enter the number of employees: ");
scanf("%d",&n);
printf("Enter the employee details: \n");
for(i=1;i<=n;i++){
printf("Enter %d emp id: ",i);
scanf("%d",&e[i].id);
printf("Enter %d emp name: ",i);
scanf("%s",e[i].name);
}
for(i=2;i<=n;i++){
if(e[maxi].id<e[i].id){
maxi=i;
}
}
printf("The highest paid emp is %s with %d salary.",e[maxi].name,e[maxi].id);
getch();
}