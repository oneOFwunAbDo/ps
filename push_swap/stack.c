#include "push_swap.h"

int	val(node *n)
{
	if (!n || !n->content)
		return (0);
	return (*(int *)n->content);
}

node	*node_maker(int data)
{
	int		*content;
	node	*n;

	content = malloc(sizeof(int));
	if (!content)
		return (NULL);
	*content = data;
	n = ft_lstnew(content);
	if (!n)
	{
		free(content);
		return (NULL);
	}
	return (n);
}

int	empty_checker(node **stack)
{
	return (stack == NULL || *stack == NULL);
}

int	push_front(node **stack, int data)
{
	node	*n;

	n = node_maker(data);
	if (!n)
		return (-1);
	ft_lstadd_front(stack, n);
	return (0);
}

int	push_back(node **stack, int data)
{
	node	*n;

	n = node_maker(data);
	if (!n)
		return (-1);
	ft_lstadd_back(stack, n);
	return (0);
}

int	read_top(node *stack)
{
	return (stack ? val(stack) : -1);
}

void	print_stack(node **stack)
{
	node	*t;

	if (!stack)
		return ;
	t = *stack;
	while (t)
	{
		ft_putnbr_fd(val(t), 2);
		ft_putstr_fd(" -> ", 2);
		t = t->next;
	}
	ft_putendl_fd("NULL", 2);
}

void	freeme(node **stack)
{
	if (stack)
		ft_lstclear(stack, free);
}

void	freeme_split(char **vals)
{
	int	i;

	i = 0;
	if (!vals)
		return ;
	while (vals[i])
		free(vals[i++]);
	free(vals);
}
