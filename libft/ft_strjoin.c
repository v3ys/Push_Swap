/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veraslan <veraslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:23:27 by veraslan          #+#    #+#             */
/*   Updated: 2023/12/17 14:39:12 by veraslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	joined = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!joined)
		return (NULL);
	while (s1 && *s1)
		joined[i++] = *s1++;
	while (s2 && *s2)
		joined[i++] = *s2++;
	joined[i] = '\0';
	return (joined);
}
