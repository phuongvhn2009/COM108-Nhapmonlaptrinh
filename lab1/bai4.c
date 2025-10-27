#include <stdio.h>

int main() {
    printf("\nKich thuoc kieu du lieu short: %zu BYTE", sizeof(short));
    printf("\nKich thuoc kieu du lieu int: %zu BYTE", sizeof(int));
    printf("\nKich thuoc kieu du lieu float: %zu BYTE", sizeof(float));
    printf("\nKich thuoc kieu du lieu long: %zu BYTE", sizeof(long));
    printf("\nKich thuoc kieu du lieu char: %zu BYTE", sizeof(char));
    printf("\nKich thuoc kieu du lieu unsigned int: %zu BYTE", sizeof(unsigned int));
    printf("\nKich thuoc kieu du lieu double: %zu BYTE", sizeof(double));
    printf("\nKich thuoc kieu du lieu longdouble: %zu BYTE", sizeof(long double));

    return 0;
}

