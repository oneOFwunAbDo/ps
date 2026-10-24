#include "push_swap.h"

void	swapper(node **source)
{
	void	*tmp;

	if (!source || ft_lstsize(*source) < 2)
		return ;
	tmp = (*source)->content;
	(*source)->content = (*source)->next->content;
	(*source)->next->content = tmp;
}

void	sa(node **a)
{
	if (!a || ft_lstsize(*a) < 2)
		return ;
	swapper(a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(node **b)
{
	if (!b || ft_lstsize(*b) < 2)
		return ;
	swapper(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(node **a, node **b)
{
	if ((!a || ft_lstsize(*a) < 2) && (!b || ft_lstsize(*b) < 2))
		return ;
	swapper(a);
	swapper(b);
	ft_putstr_fd("ss\n", 1);
}
