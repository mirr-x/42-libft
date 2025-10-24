/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:30:39 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/24 09:38:24 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	remain;
	int		i;
	int		slen;
	char	*ptr;

	slen = ft_strlen(s);
	remain = slen - (start + 1);
	if (s == NULL)
		return (NULL);
	else if (start >= ft_strlen(s) || remain < len)
		return (malloc(1));
	i = 0;
	ptr = (char *)malloc(len * sizeof(char) + 1);
	while (s[start] != '\0' && i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
