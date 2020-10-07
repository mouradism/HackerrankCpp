#include <iostream>
#include <cstdio>
using namespace std;

/*
Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value


int, long, char, float, double
*/


int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&i, &l, &c,&f,&d);
    printf("%d\n%ld\n%c\n%f\n%lf",i, l, c,f,d);
    return 0;
}