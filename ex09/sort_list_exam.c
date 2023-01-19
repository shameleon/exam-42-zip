/* ************************************************************************** */
/* sort_list.c  17-jan 2023 submitted at exam-42-zip  ===> moulinette [ok]    */
/******************************************************************************/
/*
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
    while (lst)
    {
        if (!cmp((int)lst->data, (int)lst->next->data))
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
