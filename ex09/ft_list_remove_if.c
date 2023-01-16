/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:49:25 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/16 09:50:57 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*
    1 / detect list head to be removed
    2/ detect next element to be removed, if necessary splice to next->next
*/
/* cmp returns 0 if data==data_ref */
int     cmp(void *data, void *data_ref)
{
    int a;
    int b;
    
    a = *(int *)data;
    b = *(int *)data_ref;
	return (a != b);
}


void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *lst;
    t_list  *tmp;

    if (!begin_list || *begin_list == NULL)
        return ;
    while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
    {
        tmp = *begin_list;
        *begin_list = tmp->next;
        free (tmp);
    }
    lst = *begin_list;
    while (lst && lst->next)
    {
        if ((*cmp)(lst->next->data, data_ref) == 0)
        {
            tmp = lst->next;
            lst->next = tmp->next;
            free (tmp);
        }
        else
            lst = lst->next;
    }
}

int     main(void)
{
    t_list  *head;
    t_list  *lst;
    t_list  *tmp;
    int     tab[]= { 4, -32, 4, 4, 16, 25, 36 };
    int     ref = 4;
    int     i;

    head = malloc(sizeof(t_list));
    head->data = &tab[0];
    lst=head;
    i = 1;
    while (i < 7)
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
        printf ("  %d  -->", (*(int *)(lst->data)));
        tmp = lst;
        lst = lst->next;
        free (tmp);
    }
    printf ("  |NULL|\n");
    return (0);
}
