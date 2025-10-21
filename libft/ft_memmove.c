/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:49:46 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/20 20:05:01 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Safely copies 'len' bytes from 'src' to 'dst', 
 * even if they overlap not like memcpy
 * no corption of data we start coppying from the last if addrs of dst > src 
 * see chart i made in /notes
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = len - 1;
	if (dst > src)
	{
		while (i != -1)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
