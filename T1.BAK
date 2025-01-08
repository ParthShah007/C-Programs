#include<stdio.h>
#include<conio.h>
struct author{
char name[10];
char email_id[10];
};
typedef struct book {
char title[10];
char publication[10];
int no_pages;
struct author a;
}bk;
void main () {
bk b;
clrscr();
printf("Enter the Book details: \n");
printf("Enter title: ");
scanf("%s",b.title);
printf("Enter publication: ");
scanf("%s",b.publication);
printf("Enter number of pages: ");
scanf("%d",&b.no_pages);
printf("Enter name of the author: ");
scanf("%s",b.a.name);
printf("Enter email id: ");
scanf("%s",b.a.email_id);
printf("Book details are: \n");
printf("Title: %s\n",b.title);
printf("Publication: %s\n",b.publication);
printf("Number of pages: %d\n",b.no_pages);
printf("Name of author: %s\n",b.a.name);
printf("E-mail: %s",b.a.email_id);
getch();
}
