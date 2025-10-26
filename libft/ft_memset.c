/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:41:12 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/26 13:32:02 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rec(unsigned char *memory, unsigned char c, size_t len)
{
	if (len == 0)
		return ;
	rec(memory, c, len - 1);
	memory[len - 1] = c;
	return ;
}

/* Fills the first 'len' bytes of memory at 'b' with the value 'c' */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	rec((unsigned char *)b, (unsigned char)c, (size_t)len);
	return (b);
}
