/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <viforget@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:37:49 by viforget          #+#    #+#             */
/*   Updated: 2019/10/20 15:23:36 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((UCHAR *)s1)[i] != ((UCHAR *)s2)[i])
			return (((UCHAR *)s1)[i] - ((UCHAR *)s2)[i]);
		i++;
	}
	return (0);
}
