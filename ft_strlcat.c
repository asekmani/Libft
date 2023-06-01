/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:55:06 by asekmani          #+#    #+#             */
/*   Updated: 2022/11/29 18:16:23 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstln;
	size_t	srcln;

	if ((!dst || !src) && size == 0)
		return (size);
	dstln = ft_strlen(dst);
	srcln = ft_strlen(src);
	if (size <= dstln || size == 0)
		return (size + srcln);
	i = 0;
	while ((src[i] != '\0') && (size - 1 > dstln + i))
	{
		dst[dstln + i] = src[i];
		i++;
	}
	if (size > i)
		dst[dstln + i] = '\0';
	return (dstln + srcln);
}
