#include<stdio.h>
#include<conio.h>
int main () {
    char a[200];
    int l=1,w=1,c=0,i=0;
    clrscr();
    printf("Enter a string: ");
    scanf("%[^$]s",a);
    while(a[i]!='\0'){
        if(a[i]=='\n'){
            l++;
            w++;
        } else if(a[i]=='\t' || a[i]==' '){
            w++;
        } else {
            c++;
	}
	i++;
    }
    printf("The number of lines is %d.\n",l);
    printf("The number of words is %d.\n",w);
    printf("The number of char is %d.\n",c);
    getch();
    return 0;
}