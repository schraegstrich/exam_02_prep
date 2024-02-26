
#include "ft_list.h"

int	ft_list_size( t_list *begin_list)
{
	int res;
	res = 1;
	if (begin_list == 0)
		return(0);
	while (begin_list -> next)
	{
		res++;
		begin_list = begin_list -> next;
	}
	return(res);
}

//way shorter solution by smart people
// int	ft_list_size(t_list *begin_list)
// {
// 	if (begin_list == 0)
// 		return (0);
// 	else
// 		return (1 + ft_list_size(begin_list->next));
// }