/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalia <iwhana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:22:06 by amalia            #+#    #+#             */
/*   Updated: 2021/11/30 18:22:09 by amalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *ptr_j)
{
	size_t	i;

	if (!s)
	{
		write (1, "(null)", 6);
		*ptr_j += 6;
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], ptr_j);
		i++;
	}
}
