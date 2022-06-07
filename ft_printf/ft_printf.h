/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalia <iwhana@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:44:10 by amalia            #+#    #+#             */
/*   Updated: 2021/12/09 16:44:01 by amalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_index
{
	size_t	i;
	int		j;
	int		*ptr_j;
}	t_index;

int		ft_putchar(char c, int *ptr_j);
void	ft_putstr(char *s, int *ptr_j);
void	ft_putnbr(int n, int *ptr_j);
void	ft_putunsignednbr(unsigned int n, int *ptr_j);
void	ft_putlowhexnbr(unsigned int n, int *ptr_j);
void	ft_putuphexnbr(unsigned int n, int *ptr_j);
void	ft_puthexptr(unsigned long long int n, int *ptr_j);
void	ft_putptr(void *ptr, int *ptr_j);
int		ft_printf(const char *fmt, ...);

#endif
