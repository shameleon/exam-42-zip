/* 

*/

#include <unistd.h>

void    print_bits(unsigned char byte)
{
    int             i;
    unsigned char   bit;
    
    i = 8;
    while (i--)
    {
        bit = (byte >> i & 1) + '0';
        write (1, &bit, 1);
    }
    write (1, "\n", 1);
}

int     main(void)
{
    print_bits(167);
    return (0);
}