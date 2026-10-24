#include "push_swap.h"

void	pusher(node **source, node **destination)
{
	node	*top;

	if (!source || !destination || !*source)
		return ;
	top = *source;
	*source = top->next;
	top->next = NULL;
	ft_lstadd_front(destination, top);
}

void	pa(node **a, node **b)
{
	if (!b || !*b)
		return ;
	pusher(b, a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(node **a, node **b)
{
	if (!a || !*a)
		return ;
	pusher(a, b);
	ft_putstr_fd("pb\n", 1);
}
