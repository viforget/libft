/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <viforget@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:15:22 by viforget          #+#    #+#             */
/*   Updated: 2019/10/20 15:23:57 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((UCHAR *)dst)[i] = ((UCHAR *)src)[i];
		if (((UCHAR *)src)[i] == (UCHAR)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
