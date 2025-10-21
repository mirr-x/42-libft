/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:41:16 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/20 19:59:26 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Sets the first 'n' bytes of memory at 's' to zero */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
