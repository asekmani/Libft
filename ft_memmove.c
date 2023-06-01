/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:56:59 by asekmani          #+#    #+#             */
/*   Updated: 2022/11/30 10:57:15 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest1 > src1)
	{
		while (n > i)
		{
			dest1[n - 1] = src1[n - 1];
				n--;
		}
		return (dest);
	}
	while (n > i)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
