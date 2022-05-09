#include<stdio.h>

int main () {
    int a;
    float ∗p;

    //p = &a; //critical line, error: incompatible types when assigning to type 'float' from type 'int *'
    p = (float*)&a;//cast as float
    ∗p = 3.1415;

    printf( "Pi = %d\n" , a);
    getchar();

    return 0 ;
}
//c) interprets result as an integer even tough it's a float

