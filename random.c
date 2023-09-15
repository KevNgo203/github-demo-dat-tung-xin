#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {

    printf("The addition of 4 and 5 is %d\n", add(4,5));

    return 0;
}