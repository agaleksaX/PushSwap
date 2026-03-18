/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaleksa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 15:45:09 by agaleksa          #+#    #+#             */
/*   Updated: 2026/03/18 19:14:24 by agaleksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	choose_sort(t_program *p, double disorder)
{
	if (p->flags.simple == 1 && p->flags.medium == 0 && p->flags.complex == 0
		&& p->flags.adaptive == 0)
		simple_sort(p);
	else if (p->flags.simple == 0 && p->flags.medium == 1
		&& p->flags.complex == 0 && p->flags.adaptive == 0)
		medium_sort(p);
	else if (p->flags.simple == 0 && p->flags.medium == 0
		&& p->flags.complex == 1 && p->flags.adaptive == 0)
		complex_sort(p);
	else
		adaptive_sort(p, disorder);
}

static int	handle_sorted(t_program *p)
{
	if (is_sorted(p->a))
	{
		if (!(p->flags.bench == 1))
			free_stack(&p->a);
		else
			print_bench(p, 0);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_program	p;
	double		disorder;

	p.a = NULL;
	p.b = NULL;
	p.stats = (t_stats){0};
	if (argc < 2)
		return (0);
	parse_flags(argc, argv, &p);
	parse_arguments(argc, argv, &p, p.flags.start);
	if (handle_sorted(&p))
		return (0);
	disorder = compute_disorder(p.a);
	index_stack(p.a);
	choose_sort(&p, disorder);
	if (p.flags.bench)
		print_bench(&p, disorder);
	free_stack(&p.a);
	return (0);
}
