#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/stdio.h"


int main()
{
    stdio_init_all();

    char name[100];
    while (true)
    {
        printf("> ");
        scanf("%s", name);

        printf("Hallo, %s!\n", name);
    }
}
