#include <stdlib.h>
#include "ft_list.h"


void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list  *lst;

    lst = begin_list;
    while (lst)
    {
        (*f)(lst->data);
        lst = lst->next;
    }
}

void add_4(void *data)
{
    int     *nb;

    nb = (int *)data;
    *nb = *nb + 4;
}

int     main(void)
{
    t_list  *lst;
    int    n1 = 9;
    int    n2 = 16;
    int    n3 = 25;
    int    n4 = 36;

    lst = malloc(sizeof(t_list));
    lst->data = &n1;
    lst->next = malloc(sizeof(*lst));
    lst->next->data = &n2;
    lst->next->next = malloc(sizeof(t_list));
    lst->next->next->data = &n3;
    lst->next->next->next = malloc(sizeof(t_list));
    lst->next->next->next->data = &n4;
    lst->next->next->next->next = NULL;
    ft_list_foreach(lst, add_4);
    while (lst)
    {
        printf("%d\n", (*(int *)(lst->data)));
        lst = lst->next;
    }
    free (lst->next->next->next);
    free (lst->next->next);
    free (lst->next);
    free (lst);
    return (0);
}