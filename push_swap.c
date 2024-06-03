/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veraslan <veraslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:35:54 by veraslan          #+#    #+#             */
/*   Updated: 2024/06/01 18:04:26 by veraslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	not_sorted(t_stack_node *a, t_stack_node *b)
{
	if (stack_len(a) == 2)
		sa(&a, false);
	else if (stack_len(a) == 3)
		sort_three(&a);
	else
		sorting(&a, &b);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**splitted;
	int				check;

	a = NULL;
	b = NULL;
	check = 0;
	splitted = argv + 1;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		check = 1;
	}
	stack_init_a(&a, splitted, check);
	if (!stack_sorted(a))
		not_sorted(a, b);
	free_stack(&a, splitted, check);
	return (0);
}
