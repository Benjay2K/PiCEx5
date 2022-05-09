#include <stdio.h>
#include <math.h>

int main() {
    double LENGTH = 1000;
    double BASE = 10;
    double maxval = pow(BASE, LENGTH - 1); //find power of given number
    printf("%f\n", maxval);
    int a = 0;
    int b = 1;
    int h;  // holder variable
    int x = 1;
    while (b < maxval) {
        h = b;
        b = a + b;
        a = h;
        x++;
    }
    printf("%d\n", x);
    return 0;
}
