/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaleksa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:37:35 by agaleksa          #+#    #+#             */
/*   Updated: 2026/03/21 14:10:23 by agaleksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_program *p)
{
	int	a = p->a->value;
	int	b = p->a->next->value;
	int	c = p->a->next->next->value;

	if (a > b && b < c && a < c)
		sa(p);
	else if (a > b && b > c)
	{
		sa(p);
		rra(p);
	}
	else if (a > b && b < c && a > c)
		ra(p);
	else if (a < b && b > c && a < c)
	{
		sa(p);
		ra(p);
	}
	else if (a < b && b > c && a > c)
		rra(p);
}