#include<stdio.h>
#include<conio.h>
struct student {
int rn;
char name[100];
float marks;
};
int main () {
struct student s1;
clrscr();
printf("Enter roll number,name,marks: ");
scanf("%d %[^$]s %f",&s1.rn,s1.name,&s1.marks);
printf("The student details are: \n");
printf("Roll number: %d\n",s1.rn);
printf("Name: %s\n",s1.name);
printf("Marks: %.2f\n",s1.marks);
getch();
return 0;
}