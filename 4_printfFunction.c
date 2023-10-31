#include <stdio.h>

int main(){

    int x = 10;
    char c = 'X';
    int y = 2;

    printf("Hello!\n");
    printf("%d %d %c \n", x, y, c);
    printf("%d + %d = %d\n", x, y, x+y);

    float w = 3.33333;

    printf("%.2f\n", w); // Specifies which decimal places to print after the point. (3.33)

    int r = 10;
    printf("%4d\n", r); // Specifies minimum number of occupied places. (  10)

    /*
    "%d" - int
    "%ld" - long
    "f" - float
    "lf" - double
    "%c" - chart
    "%s" - string
    "%u" - unsigned
    "%e" - cientific notation
    */

    return 0;
}
