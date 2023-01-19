/* ************************************************************************** */
/*   expand_str.c submitted on 17-jan 2023 at exam-42-zip => moulinette [OK]  */
/* ************************************************************************** */

#include <unistd.h>

int	is_spacer(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	expand_str(char *s)
{
	int	i;
	int 	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
    if (!is_spacer(s[i]))
    {
      if (s[i] > ' ' && s[i] < '~')
        write(1, &s[i], 1);
      wc = 1;
    }
    if (wc && s[i + 1] && !is_spacer(s[i + 1]))
		  write(1, "   ", 3);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
