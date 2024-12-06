#include<stdio.h>
#include<conio.h>
#include<math.h>
int main () {
    int n, temp, r, rem=0, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(n!=0) {
        n=n/10;
        count++;
    }
    n=temp;
    while(n!=0) {
        r=n%10;
        rem=rem + pow(r, count);
        n=n/10;
    }
    if(rem==temp) {
        printf("Armstrong Number");
    } else {
        printf("Not an Armstrong Number");
    }
    getch();
    return 0;
}



