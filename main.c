#include <stdio.h>   // standard io
#include <stdlib.h>  // standard lib
#include <limits.h>  // char, int limits
#include <float.h>   // float limits
#include <stdbool.h> // boolean library
#include <string.h>  // strings

int main() {

    // variables and data types

    bool b;                 // 1 bit,   false (0) or true (1)                          %d

    char c;                 //  8 bits, -128 to 127                                    %c, %d
    unsigned char uc;       //          0 to 255                                       %d

    short int si;           // 16 bits, -32768 to 32767                                %d
    unsigned short int usi; //          0 to 65535                                     %d

    int i;                  // 32 bits, -2147483648 to 2147483647                      %d
    unsigned int ui;        //           0 to 4294967295                              %ud

    long int li;            // 64 bits, -9223372036854775808 to 9223372036854775807   %ld
    unsigned long int uli;  //          0 to 18446744073709551615                     %lu

    float f;                // 1.175494e-38 to 3.402823e+38                            %e
    double d;               // 2.225074e-308 to 1.797693e+308                          %e
    long double ld;         // .362103e-4932 to 1.189731e+4932                        %Le

    // ----- S T R I N G S ---------------------------------------------------------------------------------------------

    char whome[] = "George Campbell";
    char other[32];
    strcpy(other, whome);
    printf("%s \n", other);

    // ----- L O O P S -------------------------------------------------------------------------------------------------

    for (int n = 0; n < 5; n++) { printf("%d ", n); }

    printf("\n"); // ----------------------------

    int count = 100;
    while (count < 105) {
        if (count == 101) {
            count++;
            continue;
        }
        if (count == 103) break;

        printf("%d ", count++);
    }


    printf("\n"); // ----------------------------

    int p = -20;
    do {
        printf("%d ", p--);
    } while (p > -25);

    printf("\n");

// ----- B R A N C H I N G ---------------------------------------------------------------------------------------------

    int y = 7;

    if (y == 8) {
        printf("Wrong");
    } else if (y == 7) {
        printf("Right");
    } else {
        printf("Default");
    }

    printf("\n"); // ----------------------------

    int z = 3;
    switch (--z) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        default:
            printf("default");
            break;
    }

    printf("\n"); // ----------------------------

    z == 3 ? printf("yes") : printf("no");

    printf("\n"); // ----------------------------

    // ----- A R R A Y S -----------------------------------------------------------------------------------------------

    int vals[3] = {145, 65, 76};
    for (int j = 0; j < 3; j++) { printf("%d ", vals[j]); }

    printf("\n"); // ----------------------------

    char cvals[2][2] = {{'a', 'b'},
                        {'c', 'd'}};

    for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 2; l++) {
            printf("%c ", cvals[k][l]);
        }
    }

    printf("\n"); // ----------------------------

    // ----- P O I N T E R S -------------------------------------------------------------------------------------------

    int *ptr;
    int pval = 7;
    ptr = &pval;
    printf("ptr = %x, pval = %d\n", ptr, *ptr);

    int *pa = malloc(2 * sizeof(int));
    *pa = 3;
    *(pa + 1) = 4;
    printf("%x, %d, %d\n", pa, *pa, *(pa + 1));
    free(pa);

    // ----- S T R U C T -----------------------------------------------------------------------------------------------

    struct Person {
        char name[50];
        int age;
        float salary;
    } person;

    strcpy(person.name, "George Campbell");
    person.age = 54;
    person.salary = 60000;

    printf("%s %d %f\n", person.name, person.age, person.salary);

    // ----- F I L E S -------------------------------------------------------------------------------------------------

    FILE *fp;
    // r, w, a, r+ (read, write), w+ (read, write, create), a+ (read, append, create)
    // must use the full path
    fp = fopen("/Users/georgecampbell/CLionProjects/c-notes/george.txt", "w+");
    if (fp == NULL) {
        printf("Failed to open file\n");
        exit(1);
    }

    int tt = 39343;
    fprintf(fp, "This data was written to a file: %d\n", tt);
    fclose(fp);

    fp = fopen("/Users/georgecampbell/CLionProjects/c-notes/george.txt", "r");
    if (fp == NULL) {
        printf("Failed to open file\n");
        exit(1);
    }

    char buf[255];
    fgets(buf, 255, fp);
    fclose(fp);
    printf("%s", buf);


    return 0;
}
