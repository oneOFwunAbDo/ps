#include "push_swap.h"

int	atoi_on_drugs(const char *str, int *out)
{
	int		i;
	long	sign;
	long	result;

	if (!str || !out)
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit((unsigned char)str[i]))
			return (0);
		result = result * 10 + (str[i] - '0');
		if (sign * result > INT_MAX || sign * result < INT_MIN)
			return (0);
		i++;
	}
	*out = (int)(sign * result);
	return (1);
}

int	has_dup(node *stack, int value)
{
	while (stack)
	{
		if (val(stack) == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	adder(node **stack, char *str)
{
	int	value;

	if (!atoi_on_drugs(str, &value) || has_dup(*stack, value))
		return (0);
	return (push_back(stack, value) == 0);
}

int	processor(char *arg, node **stack)
{
	char	**arguments;
	int		index;

	arguments = ft_split(arg, ' ');
	if (!arguments || !arguments[0])
	{
		freeme_split(arguments);
		return (0);
	}
	index = 0;
	while (arguments[index])
	{
		if (!adder(stack, arguments[index]))
		{
			freeme_split(arguments);
			return (0);
		}
		index++;
	}
	freeme_split(arguments);
	return (1);
}

int	bob_the_builder(int argc, char **argv, node **stack)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		if (!processor(argv[index], stack))
			return (0);
		index++;
	}
	return (1);
}
