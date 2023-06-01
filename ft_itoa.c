/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:10:16 by asekmani          #+#    #+#             */
/*   Updated: 2022/11/30 11:12:07 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_size(int nbr)
{
	long int	nb;
	int			size;

	nb = nbr;
	size = 1;
	if (nb < 0)
	{
		size++;
		nb *= -1;
	}
	while (nb / 10)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			i;
	int			neg;
	char		*res;

	neg = 0;
	nb = n;
	res = (char *)ft_calloc(ft_size(nb) + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = ft_size(nb) - 1;
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
		neg = 1;
	}
	while (i >= neg)
	{
		res[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	return (res);
}
