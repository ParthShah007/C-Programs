#include<stdio.h>
#include<conio.h>
void main () {
char n1[]="Parth Shah";
char *ptr=n1;
char n2[]="Parth Shah";
char *ptr2=n2;
int len=0;
clrscr();
while(*ptr!='\0' || *ptr2!='\0'){
if(ptr==ptr2){
len++;
}
ptr++;
ptr2++;
}
if(len==ptr){
printf("Same strings");
} else {
printf("Different strings");
}
getch();
}