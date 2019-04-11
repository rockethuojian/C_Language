#include <stdio.h>

main()
{
    int c, blank_flag;

    blank_flag = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            blank_flag = 0;
        }
        else
            if (blank_flag == 0)
            {
                putchar(' ');
                blank_flag = 1;
            }

#if 0 /*Written by GF*/
        if (c == ' ')
            blank_flag = 1;
        else
        {
            if (blank_flag != 0)
            {
                putchar(' ');
                putchar(c);
                blank_flag = 0;
            }
            else
                putchar(c);
        }
#endif
    }
}
