/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:31:13 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/21 11:59:20 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

/**
 * Adds 'src' to the end of 'dst',
 * but makes sure 'dst' is not longer than 'dstsize - 1'.
 *  Returns the total size it wanted to make
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;
	size_t	empty_dst_space;
	size_t	total_size;

	i = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (dstsize == 0)
		return (lensrc);
	total_size = lensrc + lendst;
	empty_dst_space = dstsize - lendst;
	if (lensrc > empty_dst_space)
		return (total_size);
	while (i != lensrc)
	{
		dst[lendst++] = src[i++];
	}
	return (total_size);
}

#include <stdio.h>
int main(void)
{
	char dest[11] = "a";
	printf("%zu\n",ft_strlcat(dest, "lorem", 15));
	printf("%s\n", dest);

}