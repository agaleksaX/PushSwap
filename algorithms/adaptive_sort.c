/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <ssaghate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 22:24:47 by agaleksa          #+#    #+#             */
/*   Updated: 2026/03/21 16:44:03 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_program *p, double disorder)
{
	if (disorder < 0.1)
		simple_sort(p);
	else if (disorder < 0.3)
		medium_sort(p);
	else
		complex_sort(p);
}
