#include <stdio.h>

main()
{
    int c;  /* char c; will never get value EOF to terminate the loop behind */

    printf("EOF = (char) %c , (int) %d \n",EOF,EOF);
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    putchar(92);
}
