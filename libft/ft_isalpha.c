/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:27:12 by molahrac          #+#    #+#             */
/*   Updated: 2025/11/01 21:08:43 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks if 'c' is an alphabetic character (uppercase or lowercase) */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}
