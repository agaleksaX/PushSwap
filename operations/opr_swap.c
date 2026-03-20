/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opr_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaleksa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:04:25 by agaleksa          #+#    #+#             */
/*   Updated: 2026/03/20 20:36:42 by agaleksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_program *p)
{
	swap_nodes(&(p->a));
	p->stats.sa++;
	write(2, "sa\n", 3);
}

void	sb(t_program *p)
{
	swap_nodes(&(p->b));
	p->stats.sb++;
	write(2, "sb\n", 3);
}

void	ss(t_program *p)
{
	swap_nodes(&(p->a));
	swap_nodes(&(p->b));
	p->stats.ss++;
	write(2, "ss\n", 3);
}
