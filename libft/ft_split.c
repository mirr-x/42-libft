/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:14:18 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/25 12:53:19 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int g_index_of_strimed = 0;

//+-------------count words
int	count_words(char *s_trimed, char c)
{
	int i = 0;
	int num_of_wrds = 0;
	if(s_trimed[i] == '\0')
		return (0);
	if (s_trimed[0] != c)
	{
		num_of_wrds++;
	}
	while (s_trimed[i] != '\0')
	{
		if (s_trimed[i] == c && s_trimed[i - 1] != c)
			num_of_wrds++;
		i++;
	}
	return (num_of_wrds);
}
char *extract_word(char *s_trimed, char c)
{
	int size = 0;
	while (s_trimed[size] != '\0' && s_trimed[size] != c)
		size++;
	char *str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	int i = 0;
	while (i != size)
	{
		str[i] = s_trimed[g_index_of_strimed];
		i++;
		g_index_of_strimed++;
	}
	str[i] = '\0';
	if (s_trimed[g_index_of_strimed] == c)
		g_index_of_strimed++;
	return (str);
}

//+-------------do_all  "Hello mirr"
void do_all(char **arr_of_words, int num_of_wrds, char *s_trimed, char c)
{
	int i = 0;
	while (i != num_of_wrds)
	{
		char *te = extract_word(s_trimed, c);
		arr_of_words[i] = te;
		printf("im in do_all__%s___\n", te);
		i++;
	}
	arr_of_words[i] = NULL;
}

//+-------------split
char	**ft_split(char const *s, char c)
{
	char	*s_trimed;
	char	seprator[2];

	seprator[0] = c;
	seprator[1] = '\0';
	s_trimed = ft_strtrim(s, seprator);
	printf("__%s__\n", s_trimed); //@test ft_strtrim

	int num_of_wrds = count_words(s_trimed, c);
	printf("%d\n", num_of_wrds);  //@test ft_word

	char **arr_of_words = (char **)malloc(num_of_wrds * sizeof(char *) + 1);
	if (!arr_of_words)
		return (NULL);
	
	
	do_all(arr_of_words, num_of_wrds, s_trimed, c);

	
	return (NULL);
}

//+-------------main

int main()
{
	char *s = "  Hello mirr  ";
	char c = ' ';
	char **arr_of_words = ft_split(s, c);

	int i = 0;
	while (arr_of_words != NULL)
	{
		printf("%s\n",arr_of_words[i]);
		free(arr_of_words[i]);
		i++;
	}
	free(arr_of_words);
	return(0);
}
