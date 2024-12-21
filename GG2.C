#include<stdio.h>
#include<conio.h>
int main () {
    int i=0,j=0,c=0,d;
    char a[100],b[100];
    clrscr();
    printf("Enter the word: ");
    scanf("%[^$]s",a);
    printf("Enter the string: ");
    scanf("%[^$]s",b);
    while(b[i]!='\0'){
        if(a[0]==b[i]){
            if((b[i-1]==' ')||(b[i-1]==',')||(b[i-1]=='\n')){
                j=0;
                while(a[j]!='\0'){
                    if(a[j]==b[i]){
                        d=0;
                    } else {
                        d=1;
                        break;
                    }
                    j++;
                    i++;
                    }
                    if((b[i-1]==' ')||(b[i-1]==',')||(b[i-1]=='\n')){
                        c++;
                    }
            }}
            i++;
    }
    printf("%d",c);
    getch();
    return 0;
}

