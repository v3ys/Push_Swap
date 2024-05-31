/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veraslan <veraslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:10:44 by veraslan          #+#    #+#             */
/*   Updated: 2023/12/08 17:17:05 by veraslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s11;
	char	*s22;
	size_t	i;

	i = 0;
	s11 = (char *)s1;
	s22 = (char *)s2;
	while (i < n)
	{
		if (s11[i] != s22[i])
			return ((unsigned char)s11[i] - (unsigned char)s22[i]);
		i++;
	}
	return (0);
}
