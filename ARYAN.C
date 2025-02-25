#include <stdio.h>
#include <conio.h>

void main() {
    char a[20];
    int i, l = 0, count[256] = {0};

    clrscr();
    printf("Enter name: ");
    scanf("%s", a);


    while (a[i] != '\0') {
	l++;
    }

    // Count frequency of each character
    for (i = 0; i < l; i++) {
	count[(int)a[i]]++;
    }

    // Display frequencies
    printf("Character frequencies:\n");
    for (i = 0; i < l; i++) {
	if (count[(int)a[i]] > 0) {
	    printf("%c -> %d times\n", a[i], count[(int)a[i]]);
	    count[(int)a[i]] = 0; // Avoid printing the sa
	}
    }

    getch();
}
