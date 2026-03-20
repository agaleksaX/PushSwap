/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opr_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaleksa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:04:21 by agaleksa          #+#    #+#             */
/*   Updated: 2026/03/20 20:36:32 by agaleksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_program *p)
{
	rotate_nodes(&(p->a));
	p->stats.ra++;
	write(2, "ra\n", 3);
}

void	rb(t_program *p)
{
	rotate_nodes(&(p->b));
	p->stats.rb++;
	write(2, "rb\n", 3);
}

void	rr(t_program *p)
{
	rotate_nodes(&(p->a));
	rotate_nodes(&(p->b));
	p->stats.rr++;
	write(2, "rr\n", 3);
}
