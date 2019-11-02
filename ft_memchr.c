/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 22:45:22 by viforget          #+#    #+#             */
/*   Updated: 2019/10/20 15:24:05 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*s2;

	s2 = NULL;
	i = 0;
	while (i < n)
	{
		if (((UCHAR *)s)[0] == (UCHAR)c)
		{
			s2 = (void *)s;
			return (s2);
		}
		s++;
		i++;
	}
	return (NULL);
}
