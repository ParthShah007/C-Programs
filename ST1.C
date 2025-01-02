#include<stdio.h>
#include<conio.h>
struct author {
char name[20];
char email_id[20];
};
struct book {
char title[20];
char publication[50];
int no_pages;
struct author a;
};
void main () {
struct book b;
int i;
clrscr();
printf("Enter the details of the book: \n");
printf("Enter the title of the book: ");
scanf("%s",b.title);
printf("Enter the publication: ");
scanf("%s",b.publication);
printf("Enter the number of pages: ");
scanf("%d",&b.no_pages);
printf("Enter the author name: ");
scanf("%s",b.a.name);
printf("Enter the email id: ");
scanf("%s",b.a.email_id);
printf("Book details: \n");
puts(b.title);
puts(b.publication);
printf("%d\n",b.no_pages);
puts(b.a.name);
printf("%s\n",b.a.email_id);
getch();
}


