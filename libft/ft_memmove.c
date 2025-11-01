/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:49:46 by molahrac          #+#    #+#             */
/*   Updated: 2025/11/01 13:00:51 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Safely copies 'len' bytes from 'src' to 'dst' handle overlap */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	if (dest_ptr > src_ptr)
	{
		while (n > 0)
		{
			n--;
			dest_ptr[n] = src_ptr[n];
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
