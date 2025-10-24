/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:51:30 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/23 17:35:11 by molahrac         ###   ########.fr       */
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
	void	*ptr;

	if (nblockes == 0 || size_each == 0)
		return (malloc(1));
	ptr = malloc(nblockes * size_each);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nblockes * size_each);
	return (ptr);
}
