#include <stdio.h>

int main () {
int a, b;

if(scanf("%d %d", &a, &b) != 2) {
    printf("n/a");
}

int sum = a + b;
int diff = a - b;
int prod = a * b;

printf("%d %d %d ",sum, diff, prod);

if (b == 0) {
    printf("n/a");
}
    else {
        printf("%d", a / b);
}
return 0;
}
