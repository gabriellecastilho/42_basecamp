#include <bsd/string.h>
#include <stdio.h>

int    main(void)
{
    char    dest[15];
    char    orig[] = "trucmachin";
    printf("%zu\n", strlcpy(dest, orig, 12));
    printf("%s\n", dest);
    return (0);
}