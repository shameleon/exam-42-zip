/* ************************************************************************** */
/* a main for split.c
*/

#include <stdlib.h>
#include <stdio.h>
/*
int     is_space(char c);
char **get_words(warr, s, c);
int     count_words(char *s);
char    **ft_split(char *str);
*/
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
        free (warr[i]);
        i++;
    }
    free (warr);
    return (0);
}
