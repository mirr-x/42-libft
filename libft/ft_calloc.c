/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:51:30 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/28 15:53:27 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for an array of 'blockes' elements of
 * 'size_each_block' bytes each, initializes it to zero, and
 * returns a pointer to the allocated memory
 */
void	*ft_calloc(size_t nblockes, size_t size_each)
{
	unsigned char	*s;
	size_t			total;

	total = nblockes * size_each;
	if (nblockes != 0 && size_each != 0 && (total / nblockes) != size_each)
		return (NULL);
	s = malloc(nblockes * size_each);
	if (!s)
		return (NULL);
	ft_memset(s, 0, nblockes * size_each);
	return (s);
}
