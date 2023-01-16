/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouaike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:17:22 by jmouaike          #+#    #+#             */
/*   Updated: 2023/01/16 10:18:56 by jmouaike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************************
 *     sort_list :
 *    - keep track for list's ptr to 1st element : t_list *head
 *    loop : while there is a next node : lst->next
 *      - if : use cmp to compare 2 by 2 
 *          with *(int *)lst->data and ->next
 *    	    - if NOT in the rigth order 
 *    	        - change -> data by swapping values ascending function
 *    	            => ft_swap(lst-data and lst->next->data)
 *    	        - GO BACK (1st element : lst = head)
 *    	    - if IS in the right order :
 *    	=>iterate through list
******************************************************************/

#include <stdlib.h>
#include "ft_list.h"

int ascending(int a, int b)
{
	return (a <= b);
}

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list  *head;
    int     *tmp;
    
    head = lst;
    while (lst->next)
    {
        if (!cmp(*(int *)lst->data, *(int *)lst->next->data))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = head;
        }
        else
            lst = lst->next;
    }
    return (head);
}

int     main(void)
{
    t_list  *head;
    t_list  *lst;
    int     tab[]= { 4, 42, -16, 0, 0, 8, 23};
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
    lst = head;
    head = sort_list(lst, ascending);
    lst = head;
    while (lst)
    {
        printf ("\t%d\t|", (*(int *)(lst->data)));
        lst = lst->next;
    }
    printf ("||\n");
    lst=head;
    while (lst)
    {
        lst = lst->next;
        free (head);
        head = lst;
    }
    return (0);
}
