#include<stdio.h>
#include<conio.h>
typedef struct emp {
int emp_id;
char name[20];
int salary;
}ep;
void main () {
ep e[10];
int i=0,hp=1;
clrscr();
for(i=1;i<=5;i++){
printf("Enter the details of employee %d: \n",i);
printf("Employee id: ");
scanf("%d",&e[i].emp_id);
printf("Name: ");
scanf("%s",e[i].name);
printf("Salary: ");
scanf("%d",&e[i].salary);
}
for(i=2;i<=5;i++){
if(e[hp].salary<e[i].salary){
hp=i;
}
}
printf("The details of higest paid employee are: \n");
printf("Employee id: %d\n",e[hp].emp_id);
printf("Name: %s\n",e[hp].name);
printf("Salary: %d\n",e[hp].salary);
getch();
}