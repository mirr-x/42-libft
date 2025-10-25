/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:14:18 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/24 22:06:45 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	num_of_words(char const *s, char c)
{
	int		i;
	int		wor;

	i = 0;
	wor = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			wor++;
		i++;
	}
	return (wor);
}

int len_of_word(char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c)
		len++;
	return (len);
}

void	copy_word_to_arr1d(char *dst, char *src, char c)
{
	int		i;

	i = 0;
	while (*src != c)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	src++;
	dst[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	*s_strimed;
	int		number_words;
	char	**arr2d;
	char	*arr1d;
	int		len_wrd;
	int		pos;
	int		i;

	s_strimed = ft_strtrim(s, " "); //!malloc
	number_words = num_of_words(s_strimed, c);
	arr2d = (char **)malloc(number_words * sizeof(char *) + 1);
	i = 0;
	pos = 0;
	while (i != number_words)
	{
		len_wrd = len_of_word(s_strimed, c);
		if (len_wrd != 0)
		{
			arr1d = (char *)malloc(len_wrd * sizeof(char) + 1);
			copy_word_to_arr1d(arr1d, s_strimed, c);
			arr2d[i] = arr1d;
			i++;
		}
		else
			return (NULL);
	}
	return (arr2d);
}

#include <stdio.h>
int main()
{
	char **buffer;
	buffer = ft_split("mohamed reda", ' ');
	printf("%s\n", buffer[0]);
	printf("%s\n", buffer[1]);
	printf("%s\n", buffer[2]);
	return (0);
}