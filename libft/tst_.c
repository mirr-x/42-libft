/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:55:32 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/19 22:51:33 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

// int	main(void)
// {
// 	char	*x;

// 	x = "1337";
// 	printf("%zu\n", ft_strlen(x));
// }

#include "stdio.h"
#include "string.h"
int main()
{
	int arr[] = {'A', 'B', 'C'};
	ft_memset(arr, 68, 1);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("commmmmmmmmm\n");

	char arr2[] = {'A', 'B', 'C'};
	memset(arr, 65, 2);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}
}