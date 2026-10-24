#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef t_list	node;

/* Stack helpers */
int		val(node *n);
node	*node_maker(int data);
int		empty_checker(node **stack);
int		push_front(node **stack, int data);
int		push_back(node **stack, int data);
int		read_top(node *stack);
void	print_stack(node **stack);
void	freeme(node **stack);
void	freeme_split(char **vals);

/* Parsing */
int		atoi_on_drugs(const char *str, int *out);
int		has_dup(node *stack, int value);
int		adder(node **stack, char *str);
int		processor(char *arg, node **stack);
int		bob_the_builder(int argc, char **argv, node **stack);

/* Core operations */
void	swapper(node **source);
void	pusher(node **source, node **destination);
void	rotator(node **source);
void	rev_rotator(node **source);

/* Push_swap operations */
void	sa(node **a);
void	sb(node **b);
void	ss(node **a, node **b);
void	pa(node **a, node **b);
void	pb(node **a, node **b);
void	ra(node **a);
void	rb(node **b);
void	rr(node **a, node **b);
void	rra(node **a);
void	rrb(node **b);
void	rrr(node **a, node **b);

#endif
