#include<stdio.h>
#include<conio.h>
typedef struct student {
int rn;
char name[10];
char grade;
}st;
void main () {
st s[10];
st *p;
int i=0;
clrscr();
p=s;
for(i=0;i<5;i++){
printf("Enter the details of the student %d: ",i+1);
printf("Roll no.: ");
scanf("%d",&p->rn);
printf("Name: ");
scanf("%s",p->name);
printf("Grade: ");
scanf("%c",&p->grade);
p++;
}
p=s;
for(i=0;i<5;i++){
printf("Details of Student %d: \n",i+1);
printf("Roll no.: %d\n",p->rn);
printf("Name: %s",p->name);
printf("Grade: %c",p->grade);
p++;
}
getch();
}

