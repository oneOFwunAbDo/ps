#include "push_swap.h"

void	rotator(node **source)
{
	node	*box;

	if (!source || ft_lstsize(*source) < 2)
		return ;
	box = *source;
	*source = box->next;
	box->next = NULL;
	ft_lstadd_back(source, box);
}

void	rev_rotator(node **source)
{
	node	*previous_box;
	node	*last_box;

	if (!source || ft_lstsize(*source) < 2)
		return ;
	previous_box = *source;
	while (previous_box->next->next)
		previous_box = previous_box->next;
	last_box = previous_box->next;
	previous_box->next = NULL;
	ft_lstadd_front(source, last_box);
}

void	ra(node **a)
{
	if (!a || ft_lstsize(*a) < 2)
		return ;
	rotator(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(node **b)
{
	if (!b || ft_lstsize(*b) < 2)
		return ;
	rotator(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(node **a, node **b)
{
	if ((!a || ft_lstsize(*a) < 2) && (!b || ft_lstsize(*b) < 2))
		return ;
	rotator(a);
	rotator(b);
	ft_putstr_fd("rr\n", 1);
}

void	rra(node **a)
{
	if (!a || ft_lstsize(*a) < 2)
		return ;
	rev_rotator(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(node **b)
{
	if (!b || ft_lstsize(*b) < 2)
		return ;
	rev_rotator(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(node **a, node **b)
{
	if ((!a || ft_lstsize(*a) < 2) && (!b || ft_lstsize(*b) < 2))
		return ;
	rev_rotator(a);
	rev_rotator(b);
	ft_putstr_fd("rrr\n", 1);
}
