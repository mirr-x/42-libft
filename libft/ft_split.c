/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:14:18 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/26 01:29:24 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//+-------------count words
int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			counter++; //@we found a word
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (counter);
}

//+------free the remian case of failing
void	free_the_remain(char **arr2d, int num)
{
	int		i;

	i = 0;
	while (i != num)
	{
		free(arr2d[i]);
		i++;
	}
	free(arr2d);
}

//+--------------extact words and copy them to the 2d arr
char **extact_words_and_copy_them_to_the_2d_arr(char **arr2d, char const *s, char c, int num_of_words)
{
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	while (num_of_words != i && s[j] != '\0')
	{
		
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		end = j;
		// printf("s = %d and e = %d\n",start, end);
		arr2d[i] = ft_substr(s, start, end - start);
		if (arr2d[i] == NULL) // !fail
		{
			free_the_remain(arr2d, i);
			return (NULL);
		}
		// printf("____%s___\n",arr2d[i]);
		i++;
	}
	return (arr2d);
}

	//+-------------split
char	**ft_split(char const *s, char c)
{
	int		num_of_words;
	char	**arr_of_words;

	num_of_words = count_words(s, c);
	// if (num_of_words == 0) // !fails
	// 	return (malloc(1));
	arr_of_words = (char **)malloc(((num_of_words + 1) * sizeof(char *)));
	if(!arr_of_words) // !fails
		return (NULL);
	arr_of_words[num_of_words] = NULL;
	if (!extact_words_and_copy_them_to_the_2d_arr(arr_of_words, s, c, num_of_words))
		return (NULL);
	return (arr_of_words);
}
// !!hello!!!!!!!!!!"  s = 2  e = 6   len = 9 
// //+-------------main

// int main()
// {
// 	char *s = "          ";
// 	char c = ' ';
// 	char **arr_of_words = ft_split(s, c);
// 	if (!arr_of_words)
// 		return (0);
// 	int i = 0;
// 	if (arr_of_words != NULL)
// 	{
// 		while (arr_of_words[i] != NULL)
// 		{
// 			printf("_%s_\n",arr_of_words[i]);
// 			free(arr_of_words[i]);
// 			i++;
// 		}
// 		free(arr_of_words);
// 	}
// 	return(0);
// }