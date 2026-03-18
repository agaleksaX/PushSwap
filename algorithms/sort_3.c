/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaleksa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:37:35 by agaleksa          #+#    #+#             */
/*   Updated: 2026/03/18 18:36:34 by agaleksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_program *p)
{
	int	first;
	int	second;
	int	third;

	if (is_sorted(p->a))
		return ;
	first = (p->a)->value;
	second = (p->a)->next->value;
	third = (p->a)->next->next->value;
	if (first > second && second > third)
	{
		sa(p);
		rra(p);
	}
	else if (first > second && first > third && second < third)
		ra(p);
	else if (first < second && first > third)
		rra(p);
	else if (first < second && second > third && first < third)
	{
		sa(p);
		ra(p);
	}
	else if (third > first && first > second)
		sa(p);
}
