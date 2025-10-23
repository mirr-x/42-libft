/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:55:08 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/22 20:27:46 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares the first 'n' bytes of 's1' and 's2'.
 * Returns 0 if equal, or the difference of the first differing bytes.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n && *p1 == *p2)
	{
		i++;
		p1++;
		p2++;
	}
	if (n == i)
		return (0);
	return (*p1 - *p2);
}
// #include <stdio.h>
// int main()
// {
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};

// 	int x = ft_memcmp(s2, s3, 4);
// 	printf("%d\n",x);
// }