/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veraslan <veraslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:02:18 by veraslan          #+#    #+#             */
/*   Updated: 2023/12/15 17:41:16 by veraslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;
	char	*x;
	char	*y;

	a = 0;
	x = (char *)dest;
	y = (char *)src;
	if (dest == src)
		return (NULL);
	while (a < n)
	{
		x[a] = y[a];
		a++;
	}
	return (dest);
}
