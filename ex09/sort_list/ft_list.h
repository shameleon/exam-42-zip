#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct      s_list
{
    int             data;
    struct s_list   *next;
}
                 t_list;
                 
# include <stdio.h>
# include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

#endif