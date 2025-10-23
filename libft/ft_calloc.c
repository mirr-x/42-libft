/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:51:30 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/23 10:04:11 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t blockes, size_t size_each_block)
{
	unsigned char *ptr;

	ptr  = malloc(blockes * size_each_block);
	if (ptr == NULL) return (NULL);
	ft_bzero(ptr, blockes * size_each_block);
	return (ptr);
}