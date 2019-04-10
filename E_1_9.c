#include <stdio.h>

main()
{
    int c, blank_flag;

    blank_flag = 0;

    while ((c = getchar()) != EOF)
    {
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




#if 0
        if (blank_flag == 0)
            if (c == ' ')
                blank_flag = 1;
            else 
                putchar(c);
        else 
            if (c != ' ')
            {
            putchar(' ');
            blank_flag = 0;
            }
#endif
    }
}
