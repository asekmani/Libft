/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:58:54 by asekmani          #+#    #+#             */
/*   Updated: 2022/11/24 09:58:26 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)s;
	while (i < n)
	{
		res[i] = c;
		i++;
	}
	return (s);
}
