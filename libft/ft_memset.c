/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:41:12 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/26 14:27:36 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Fills the first 'len' bytes of memory at 'b' with the value 'c' */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*memory;
	size_t			i;

	memory = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		memory[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
