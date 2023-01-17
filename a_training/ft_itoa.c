
#include <stdlib.h>

int     ft_nbrlen(long int n)
{

}

char    *ft_itoa(int nbr)
{
    char        *s;
    long int    n;
    int         neg;
    int         len;

    neg = 0;
    if (nbr < 0)\
        neg = -1;
    n = nbr * neg;
    len = ft_nbrlen(n);
    s = (char *)malloc (sizeof(*s) * (len + neg + 1 ));
    
    return (s);
}

int main(int argc, char **argv)
{
    char    *s;

    if (argc != 2)
        return (0);
    s = ft_itoa(atoi(argv[1]));
    printf ("|%s|\n", s);
    return(0);
}