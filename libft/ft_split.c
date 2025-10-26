/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:14:18 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/26 10:26:14 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (counter);
}

char	*ft_substrr(char const *str, int start, int end)
{
	char	*ptr;
	int		s_len;
	int		i;

	s_len = end - start + 1;
	ptr = (char *)malloc(s_len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i != s_len)
	{
		ptr[i++] = str[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}

void	free_the_remain(char **arr2d, int num)
{
	int		i;

	i = 0;
	while (i != num)
		free(arr2d[i++]);
	free(arr2d);
}

char	**extact_wrds_to_2d_arr(char **arr2d, char const *s, char c, int n_wrds)
{
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	while (n_wrds != i)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		end = j - 1;
		arr2d[i] = ft_substrr(s, start, end);
		if (arr2d[i] == NULL)
		{
			free_the_remain(arr2d, i);
			return (NULL);
		}
		i++;
	}
	return (arr2d);
}

char	**ft_split(char const *s, char c)
{
	int		num_of_words;
	char	**arr_of_words;

	num_of_words = count_words(s, c);
	arr_of_words = (char **)malloc(((num_of_words + 1) * sizeof(char *)));
	if (!arr_of_words)
		return (NULL);
	arr_of_words[num_of_words] = NULL;
	if (!extact_wrds_to_2d_arr(arr_of_words, s, c, num_of_words))
		return (NULL);
	return (arr_of_words);
}
