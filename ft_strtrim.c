/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:19:17 by asekmani          #+#    #+#             */
/*   Updated: 2022/11/24 11:20:34 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (ft_calloc(1, 1));
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (check_char(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && check_char(set, s1[end]))
		end--;
	if (end < 0)
		return ((char *)ft_calloc(1, 1));
	return (ft_substr(s1, start, end - start + 1));
}
