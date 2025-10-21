/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:41:12 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/20 19:56:47 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Fills the first 'len' bytes of memory at 'b' with the value 'c' */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;

	i = 0;
	while (i != len)
	{
		*(char *)(b + i) = (char)c;
		i++;
	}
	return (b);
}
