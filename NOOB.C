#include<stdio.h>
#include<conio.h>
typedef struct student {
int rn;
int mks;
}s;
void sort(s s1[10],int n);
void main () {
s s1[10];
int n,i;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter %d roll number: ",i);
scanf("%d",&s1[i].rn);
printf("Enter the marks for %d: ",i);
scanf("%d",&s1[i].mks);
}
sort(s1,n);
getch();
}
void sort (s s1[10],int n){
int i,j;
s temp;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(s1[i].rn>s1[j].rn){
temp=s1[j];
s1[j]=s1[i];
s1[i]=temp;
}}}
for(i=0;i<n;i++){
printf("%d -> %d \n",s1[i].rn,s1[i].mks);
}}
