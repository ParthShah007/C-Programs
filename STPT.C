#include<stdio.h>
#include<conio.h>
typedef struct employee{
int id;
char name[10];
}emp;
void main () {
emp e[5];
int i,n;
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
for(i=1;i<=n;i++){
printf("%d -> %s\n",e[i].id,e[i].name);
}
getch();
}


