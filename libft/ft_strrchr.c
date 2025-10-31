/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:32:34 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/31 10:03:54 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the last 'c' in the string 's', including '\0'. */
char	*ft_strrchr(const char *s, int c)
{
	unsigned char *last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			last = (unsigned char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
	{
		last = (unsigned char *)s;
		return (last);
	}
	return (last);
}
