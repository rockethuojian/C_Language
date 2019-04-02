#include <stdio.h>

main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper) {
        if (celsius == lower ) printf ("%7s %3s\n", "celsius", "fahr");
        fahr = 9 * celsius / 5 + 32;
        printf("%7.0f %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }


}
