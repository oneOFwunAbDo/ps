#include "push_swap.h"

int	main(int argc, char **argv)
{
	node	*stack_a;
	node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (!bob_the_builder(argc, argv, &stack_a))
	{
		freeme(&stack_a);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	print_stack(&stack_a);
	freeme(&stack_a);
	freeme(&stack_b);
	return (0);
}
