#include <stdio.h>
int main() {
    int a[] = {10, 20, 30, 40, 50};  
    int *p = a;                    
    int l = 0;
    while (*(p+l)) {
        l++;  
    }
    printf("Length of the array is: %d",l);
    return 0;
}