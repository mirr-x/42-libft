/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:55:08 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/22 00:41:51 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)p2;
	while (i < n && *p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
		i++;
		p1++;
		p2++;
	}
	if (n == i)
		return (0);
	return (*p1 - *p2);
}
