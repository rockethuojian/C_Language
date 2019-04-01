#include <stdio.h> 

main()
{
    printf("hello, world\n");
    printf("hello, ");
    printf("\102"); /* Octal number B */
    printf("\x42"); /* Hexadecimal number B */
    printf("\c");
    printf("world");
    printf("\n");
}
