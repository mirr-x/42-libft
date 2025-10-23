/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:16:24 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/22 14:51:10 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	from 9 to 13   we have ‘ ’ , \f , \n , \r , \t , \v  |  32 is space
*/

void	skip_spacese(const char *str, size_t *i)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
	{
		(*i)++;
	}
}

void	check_sign(const char *str, size_t *i, int *xsign)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*xsign = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		rus;
	int		xsign;

	i = 0;
	rus = 0;
	xsign = 1;
	skip_spacese(str, &i);
	check_sign(str, &i, &xsign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		rus *= 10;
		rus += (str[i] - '0');
		i++;
	}
	rus = rus * xsign;
	return (rus);
}
