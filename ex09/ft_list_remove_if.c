#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *lst;
    t_list  *tmp;

    if (!begin_list || *begin_list == NULL)
        return ;
    while (*begin_list && !cmp((*begin_list)->data, data_ref))
    {
        tmp = *begin_list;
        *begin_list=(*begin_list)->next;
        free(tmp);
    }
    lst = *begin_list;
    while (lst && lst->next)
    {
        if (!cmp(lst->next->data, data_ref))
        {
            tmp = lst->next;
            lst->next = tmp->next;
            free(tmp);
        }
        else
            lst = lst->next;
    }
}

int	cmp(void *data, void *data_ref)
{
	if (data == data_ref)
		return (0);
	return (1);
}

int     main(void)
{
    t_list  *head;
    t_list  *lst;
    int     tab[]= { 4, 4, 16, 25, 36 };
    int     ref = 4;
    int     i;

    head = malloc(sizeof(t_list));
    head->data = &tab[0];
    lst=head;
    i = 1;
    while (i < 5)
    {
        lst->next = malloc(sizeof(t_list));
        lst->next->data = &tab[i];
        lst = lst->next;
        i++;
    }
    lst->next = NULL;
    lst=head;
    ft_list_remove_if(&lst, &ref, cmp);
    while (lst)
    {
        printf ("\t%d\t|", (*(int *)(lst->data)));
        lst = lst->next;
    }
    lst=head;
    while (lst)
    {
        lst = lst->next;
        free (head);
        head = lst;
    }
    printf ("||\n");
    return (0);
}