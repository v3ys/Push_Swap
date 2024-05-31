/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veraslan <veraslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:06:39 by veraslan          #+#    #+#             */
/*   Updated: 2023/12/15 17:50:36 by veraslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	size_t	a;

	a = 0;
	if (s1 == s2)
		return (s1);
	if (s2 < s1)
	{
		a = len;
		while (a > 0)
		{
			a--;
			((unsigned char *)s1)[a] = ((unsigned char *)s2)[a];
		}
	}
	else
	{
		a = 0;
		while (a < len)
		{
			((unsigned char *)s1)[a] = ((unsigned char *)s2)[a];
			a++;
		}
	}
	return (s1);
}
