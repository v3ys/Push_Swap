/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veraslan <veraslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:50 by veraslan          #+#    #+#             */
/*   Updated: 2023/12/11 20:40:07 by veraslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit++;
	while (n != 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

static void	yaz(int digit, int ilk, int n, char *res)
{
	while (digit > ilk)
	{
		res[digit - 1] = n % 10 + '0';
		n = n / 10;
		digit--;
	}
}

char	*ft_itoa(int n)
{
	int		ilk;
	int		digit;
	char	*res;

	ilk = 0;
	digit = digit_count(n);
	res = (char *)malloc(sizeof(char) * digit + 1);
	if (!res)
		return (0);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		ilk = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		ilk = 1;
		n = -n;
	}
	yaz(digit, ilk, n, res);
	res[digit] = '\0';
	return (res);
}
