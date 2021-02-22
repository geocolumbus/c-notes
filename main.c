#include <stdio.h>   // standard io
#include <limits.h>  // char, int limits
#include <float.h>   // float limits
#include <stdbool.h> // boolean library

int main() {
    bool b;                 // 1 bit,   false (0) or true (1)      %d

    char c;                 //  8 bits, -128 to 127                %c, %d
    unsigned char uc;       //          0 to 255                   %d

    short int si;           // 16 bits, -32768 to 32767            %d
    unsigned short int usi; //          0 to 65535                 %d

    int i;                  // 32 bits, -2147483648 to 2147483647  %d
    unsigned int ui;        //           0 to 4294967295           %ud

    long int li;            // 64 bits, -9223372036854775808 to    %ld
    //                                  9223372036854775807
    unsigned long int uli;  //          0 to 18446744073709551615  %lu

    long long int lli;           // same as long int               %lld
    unsigned long long int ulli; // same as unsigned long int      %llu

    float f;                // 1.175494e-38 to 3.402823e+38        %e
    double d;               // 2.225074e-308 to 1.797693e+308      %e
    long double ld;         // .362103e-4932 to 1.189731e+4932     %Le

    printf("%d", USHRT_MAX);
    return 0;
}
