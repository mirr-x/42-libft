/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:14:18 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/25 10:21:59 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	num_of_words(char const *s, char c)
{
	int		i;
	int		wor;

	i = 0;
	wor = 0;
	if (s[0] != c)
		wor++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			wor++;
		i++;
	}
	return (wor);
}

char	*extract_word(char *s_strimed, char c, int *pos)
{
	int	size_word;
	char *word;
	int		i;
	
	size_word = 0;
	while (s_strimed[*pos] != c && s_strimed[*pos] != '\0')
		size_word++;
	
	*pos = *pos + size_word;
	word = (char *)malloc(size_word + 1);
	printf("%d\n", *pos);
	i = 0;
	while (i != size_word)
	{
		word[i] = s_strimed[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	*s_strimed;
	int		number_words;
	char	**arr2d;
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
		
		arr2d[i] = extract_word(s_strimed, c, &pos);
		i++;
	}
	arr2d[i] = NULL;
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