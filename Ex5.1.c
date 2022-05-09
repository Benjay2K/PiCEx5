#include<stdio.h>

int main () {
    int a;
    float ∗p;

    p = &a; //critical line, error: incompatible types when assigning to type 'float' from type 'int *'
    ∗p = 3.1415;

    printf( "Pi = %d\n" , a);
    getchar();

    return 0 ;
}
