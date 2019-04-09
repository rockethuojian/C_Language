#include <stdio.h>

main()
{
    int c, nl, nt, nb;

    nl = nt = nb = 0;
    while ((c = getchar()) != EOF )
        if (c == '\n')     /* character constant */
            ++nl;
        else if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++nb;
        else
            ;
    printf("newlines=%d\nnewtabs=%d\nnewblanks=%d\n", nl, nt, nb);
}
