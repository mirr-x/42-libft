/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:31:13 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/21 13:37:26 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds 'src' to the end of 'dst',
 * but makes sure 'dst' is not longer than 'dstsize - 1'.
 *  Returns the total size it wanted to make !!hr
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;
	size_t	empty_dst_space;
	size_t	total_size;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (dstsize <= lendst)
		return (dstsize + lensrc);
	total_size = lensrc + lendst;
	empty_dst_space = dstsize - lendst - 1;
	i = 0;
	while (i < empty_dst_space && src[i] != '\0')
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (total_size);
}
