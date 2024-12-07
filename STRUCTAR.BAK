#include<stdio.h>
#include<conio.h>
struct address {
long int code;
char city[100];
};
typedef struct employee {
int id;
char name[100];
float income;
struct address a;
}emp;
void main () {
emp e1;
clrscr();
printf("Enter id name income code city: ");
scanf("%d %s %f %ld %s",&e1.id,e1.name,&e1.income,&e1.a.code,e1.a.city);
printf("The employee details are: \n");
printf("Code: %d\n",e1.id);
printf("Name: %s\n",e1.name);
printf("Income: %.2f\n",e1.income);
printf("Code: %ld\n",e1.a.code);
printf("City: %s\n",e1.a.city);
getch();
}
