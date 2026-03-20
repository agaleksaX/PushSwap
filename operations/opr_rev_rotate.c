/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opr_rev_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaleksa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:04:31 by agaleksa          #+#    #+#             */
/*   Updated: 2026/03/20 20:36:23 by agaleksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_program *p)
{
	rev_rotate_nodes(&(p->a));
	p->stats.rra++;
	write(2, "rra\n", 4);
}

void	rrb(t_program *p)
{
	rev_rotate_nodes(&(p->b));
	p->stats.rrb++;
	write(2, "rrb\n", 4);
}

void	rrr(t_program *p)
{
	rev_rotate_nodes(&(p->a));
	rev_rotate_nodes(&(p->b));
	p->stats.rrr++;
	write(2, "rrr\n", 4);
}
