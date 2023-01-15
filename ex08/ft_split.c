/* ************************************************************************** */
/* split.c

    - 
    -
    -
    -
    -
*/

#include <stdlib.h>
#include <stdio.h>

int     is_space(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

char **get_words(warr, s, c)
{
    return (warr);
}

int     count_words(char *s)
{
    int     i;
    int     wc;
    
    i = 0;
    wc = 0;
    while (s[i] != '\0')
    {
        if (i == 0 && !is_space(s[i]))
            wc++;
        else if (i > 0 && !is_space(s[i]) && is_space(s[i - 1]))
            wc++;
        i++;
    }
    return (wc);
}

char    **ft_split(char *str)
{
    char    **warr; 
    int     wc;

    if (s = NULL)
        return (NULL);
    wc = count_words(str);
    warr = (char *)malloc (sizeof(*warr) * (wc + 1));
    if (!warr)
        return (NULL);
    warr = get_words(warr, s, c);
    warr[wc] = NULL;
    return (warr);
}

int     main(void)
{
    char    **warr;
    char    *str;
    int i;

    i = 0;
    str = "coucou je suis un extra-terrestre \t \n\t de la planète ... \n";
    warr = ft_split(str);
    while (warr[i])
    {
        printf("%s\n",warr[i]);
        i++;
    }
    return (0);
}
