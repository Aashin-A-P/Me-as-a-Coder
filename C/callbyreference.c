#include <stdio.h>
int main () {
int a = 100;
int b = 200;
int swap(int*,int*);
printf("Before swap, value of a : %d\n", a );
printf("Before swap, value of b : %d\n", b );
swap(&a, &b);
printf("After swap, value of a : %d\n", a );
printf("After swap, value of b : %d\n", b );
return 0;
}
int swap(int *x, int *y) {
int temp;
temp = *x;
*x= *y;
*y = temp;
return 0;
}